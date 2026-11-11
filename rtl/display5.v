// Um numero de 16 bits com sinal nos 5 displays: e o mostra16 da aula 8
// transformado em peca. A entrada agora e um barramento qualquer (n), e nao
// mais as chaves; o sinal sai em 'neg', para cada um ligar onde quiser.
module display5 (
    input  signed [15:0] n,
    output        [ 6:0] HEX0, HEX1, HEX2, HEX3, HEX4,
    output               neg
);
    assign neg = n[15];
    wire [15:0] m = neg ? -n : n;        // o modulo: -32768 vira 32768
    wire [3:0]  d0, d1, d2, d3, d4;

    decimal16_dabble u_dabble (.m(m), .d0(d0), .d1(d1), .d2(d2), .d3(d3), .d4(d4));

    dig7 u0 (.d(d0), .seg(HEX0));
    dig7 u1 (.d(d1), .seg(HEX1));
    dig7 u2 (.d(d2), .seg(HEX2));
    dig7 u3 (.d(d3), .seg(HEX3));
    dig7 u4 (.d(d4), .seg(HEX4));
endmodule
