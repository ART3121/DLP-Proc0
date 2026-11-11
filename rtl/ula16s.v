// A ULA de 16 bits COM SINAL (complemento a dois).
//
// Daqui para a frente, esta e a nossa ULA.
//
// E a mesma ULA da aula passada com uma palavra a mais em cada barramento:
// 'signed'. Os circuitos de soma, subtracao e multiplicacao sao os mesmos;
// o que muda e a divisao -- e a forma de LER os 16 bits.
//
// Faixa: -32768 ... 32767.
module ula16s (
    input      signed [15:0] acc_out,
    input      signed [15:0] sram_out,
    input             [ 2:0] op,
    output reg signed [15:0] r
);
    wire signed [15:0] a = acc_out;
    wire signed [15:0] b = sram_out;

    always @(*) begin
        case (op)
            3'b001:  r = a - b;
            3'b010:  r = a * b;
            3'b000:  r = a + b;
            3'b011:  r = a / b;
            3'b100:  r = b;
            default: r = a;
        endcase
    end

endmodule
