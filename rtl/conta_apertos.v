// PARTE 1 DA AULA: o botao trepida?
// Versao para a Cyclone V GX Starter Kit (C5G), com as mesmas portas do
// proc_placa: o fpga.json serve para as duas partes, trocando so o "top".
//
// Dois contadores de apertos do KEY[0], iguais, com clocks diferentes:
//   - o BRUTO usa o proprio botao como clock
//   - o LIMPO usa o 'estavel' do debounce como clock
//
// SW[0] escolhe qual aparece nos displays: 0 = bruto, 1 = limpo.
// KEY[1] zera os dois. LEDG[0] acende enquanto o KEY[0] esta apertado (limpo).
// Os quatro displays da placa mostram ate 9999 apertos.
//
// Apertem 10 vezes e comparem os dois numeros.
module conta_apertos (
    input         CLOCK_50,
    input  [ 1:0] KEY,
    input  [ 9:0] SW,
    output [ 6:0] HEX0, HEX1, HEX2, HEX3,
    output [ 2:0] LEDR,
    output [ 7:0] LEDG
);

    // o contador bruto: cada borda de descida do botao conta (apertado = 0)
    reg [15:0] bruto = 16'd0;
    always @(negedge KEY[0] or negedge KEY[1])
        if (!KEY[1]) bruto <= 16'd0;
        else         bruto <= bruto + 1'b1;

    // o contador limpo: o mesmo contador, com o botao ja limpo como clock
    wire estavel;
    debounce db (.clk(CLOCK_50), .key_n(KEY[0]), .estavel(estavel));

    reg [15:0] limpo = 16'd0;
    always @(posedge estavel or negedge KEY[1])
        if (!KEY[1]) limpo <= 16'd0;
        else         limpo <= limpo + 1'b1;

    // o HEX4 do display5 fica sem ligar: a placa nao tem o quinto display
    wire neg;
    display5 mostra (.n(SW[0] ? limpo : bruto),
                     .HEX0(HEX0), .HEX1(HEX1), .HEX2(HEX2), .HEX3(HEX3), .HEX4(),
                     .neg(neg));

    assign LEDR = 3'b0;               // os LEDs vermelhos sao da parte 2
    assign LEDG = {7'b0, estavel};

endmodule
