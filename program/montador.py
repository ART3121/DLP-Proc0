#!/usr/bin/env python3
"""Monta um programa .asm (ou .txt) no programa.txt que a ROM le com $readmemb.

Uma instrucao por linha: MNEMONICO [addr], com o addr em decimal (0 a 15).
Comentarios comecam com ';', '#' ou '//'. Linhas em branco sao ignoradas.

    LOD 0      ; acc = mem[0]
    ADD 0      ; acc = acc + mem[0]
    JMP 1      ; volta para a linha 1

Cada instrucao vira uma palavra de 9 bits: opcode (5 bits) + addr (4 bits).

    ADD 00000   SUB 00001   MLT 00010   DIV 00011   LOD 00100
    NOP 00101   SET 01101   JMP 10101
    HLT         = JMP para a propria linha (sem addr)
    NOP         sem addr (sai 0000)

A ROM tem 16 linhas: o que sobrar e preenchido com NOP.

Uso:
    python3 montador.py programa.asm              -> programa.txt na mesma pasta
    python3 montador.py soma.asm -o programa.txt
"""

import argparse
import re
import sys
from pathlib import Path

OPCODES = {
    "ADD": "00000",
    "SUB": "00001",
    "MLT": "00010",
    "DIV": "00011",
    "LOD": "00100",
    "NOP": "00101",
    "SET": "01101",
    "JMP": "10101",
    "HLT": "10101",
}
SEM_ADDR = {"NOP", "HLT"}      # nao recebem addr
LINHAS_ROM = 16
ADDR_MAX = 15

DESCRICAO = {
    "ADD": "acc = acc + mem[{a}]",
    "SUB": "acc = acc - mem[{a}]",
    "MLT": "acc = acc * mem[{a}]",
    "DIV": "acc = acc / mem[{a}]",
    "LOD": "acc = mem[{a}]",
    "NOP": "nao faz nada",
    "SET": "mem[{a}] = acc",
    "JMP": "pc = {a}",
    "HLT": "para (pc = {a})",
}


class ErroMontagem(Exception):
    pass


def tira_comentario(linha):
    return re.split(r";|#|//", linha, maxsplit=1)[0].strip()


def monta(texto, nome="entrada"):
    """Devolve a lista de (palavra de 9 bits, texto da instrucao, descricao)."""
    saida = []
    erros = []
    for num, linha in enumerate(texto.splitlines(), start=1):
        codigo = tira_comentario(linha)
        if not codigo:
            continue
        partes = codigo.replace(",", " ").split()
        mnem = partes[0].upper()
        args = partes[1:]
        onde = f"{nome}:{num}: '{codigo}'"
        pc = len(saida)

        if mnem not in OPCODES:
            erros.append(f"{onde}: instrucao desconhecida '{partes[0]}'")
            continue

        if mnem in SEM_ADDR:
            if args:
                erros.append(f"{onde}: {mnem} nao recebe endereco")
                continue
            addr = pc if mnem == "HLT" else 0
        else:
            if len(args) != 1:
                erros.append(f"{onde}: {mnem} precisa de exatamente um endereco")
                continue
            try:
                addr = int(args[0], 10)
            except ValueError:
                erros.append(f"{onde}: endereco '{args[0]}' nao e um numero decimal")
                continue
            if not 0 <= addr <= ADDR_MAX:
                erros.append(f"{onde}: endereco {addr} fora de 0 a {ADDR_MAX}")
                continue

        if mnem == "HLT" and pc > ADDR_MAX:
            erros.append(f"{onde}: HLT na linha {pc}, a ROM so vai ate {ADDR_MAX}")
            continue

        palavra = OPCODES[mnem] + format(addr, "04b")
        texto_instr = mnem if mnem in SEM_ADDR else f"{mnem} {addr}"
        saida.append((palavra, texto_instr, DESCRICAO[mnem].format(a=addr)))

    if len(saida) > LINHAS_ROM:
        erros.append(f"{nome}: {len(saida)} instrucoes, a ROM so tem {LINHAS_ROM} linhas")
    if erros:
        raise ErroMontagem("\n".join(erros))

    while len(saida) < LINHAS_ROM:
        saida.append((OPCODES["NOP"] + "0000", "NOP", "(preenchimento)"))
    return saida


def formata(instrucoes, origem):
    linhas = [
        f"// Gerado por montador.py a partir de {origem}. Nao edite: edite o .asm.",
        "// Uma instrucao por linha, 9 bits: jmp | wr | op (3 bits) | addr (4 bits).",
        "//",
        "//jmp wr op addr     linha  instrucao  o que faz",
    ]
    for pc, (palavra, instr, desc) in enumerate(instrucoes):
        linhas.append(f"{palavra}   // {pc:<5d} {instr:<10s} {desc}")
    return "\n".join(linhas) + "\n"


def main():
    p = argparse.ArgumentParser(description="Monta um .asm no programa.txt da ROM (9 bits por linha).")
    p.add_argument("entrada", type=Path, help="arquivo .asm ou .txt")
    p.add_argument("-o", "--saida", type=Path,
                   help="arquivo de saida (padrao: programa.txt na pasta da entrada)")
    a = p.parse_args()

    if a.entrada.suffix.lower() not in (".asm", ".txt"):
        print(f"aviso: {a.entrada} nao termina em .asm nem .txt; montando assim mesmo", file=sys.stderr)
    saida = a.saida or a.entrada.with_name("programa.txt")
    if saida.resolve() == a.entrada.resolve():
        sys.exit(f"erro: a saida {saida} e o proprio arquivo de entrada")

    try:
        texto = a.entrada.read_text(encoding="utf-8")
        instrucoes = monta(texto, a.entrada.name)
    except OSError as e:
        sys.exit(f"erro: {e}")
    except ErroMontagem as e:
        sys.exit(f"erro de montagem:\n{e}")

    saida.write_text(formata(instrucoes, a.entrada.name), encoding="utf-8")
    print(f"{a.entrada} -> {saida}")
    for pc, (palavra, instr, _) in enumerate(instrucoes):
        print(f"  {pc:2d}  {palavra}  {instr}")


if __name__ == "__main__":
    main()
