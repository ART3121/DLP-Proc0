// Anti-trepidacao para um botao KEY do DE2-115 (apertado = 0).
//
// A saida 'estavel' e o nivel do botao ja limpo: 1 enquanto esta apertado. A
// borda de subida dele acontece UMA vez por aperto, e por isso ele pode ser o
// clock de um circuito que anda um passo por aperto.
//
// Dois estagios, os dois no clock de 50 MHz da placa:
//   1. sincronizador: dois flip-flops, porque o botao muda a qualquer instante
//   2. filtro: so aceita o novo nivel se ele ficar parado por 2^N ciclos
//
// Com N = 20: 2^20 / 50 MHz = 21 ms. A trepidacao de um botao dura poucos ms.
module debounce #(parameter N = 20) (
    input      clk,          // CLOCK_50
    input      key_n,        // KEY, ativo em 0
    output reg estavel       // o nivel limpo: 1 enquanto o botao esta apertado
);

    // 1. sincronizador
    reg s0, s1;
    always @(posedge clk) begin
        s0 <= ~key_n;            // inverte: apertado passa a ser 1
        s1 <= s0;
    end

    // 2. filtro: conta enquanto a entrada for diferente do nivel aceito
    reg [N-1:0] cont;
    initial begin
        estavel = 1'b0;
        cont    = 0;
    end
    always @(posedge clk) begin
        if (s1 == estavel)
            cont <= 0;                   // nada mudou, ou foi so uma trepidacao
        else begin
            cont <= cont + 1'b1;
            if (&cont)                   // 2^N ciclos seguidos no nivel novo
                estavel <= s1;
        end
    end

endmodule
