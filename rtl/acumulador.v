// O ACUMULADOR, agora declarado com sinal.
//
// Para o registrador nada muda: ele guarda 16 bits e nao sabe o que eles
// significam. O 'signed' esta aqui pela regra da aula: TUDO com sinal, em
// toda a cadeia -- porque basta um barramento sem sinal numa conta para a
// conta inteira virar sem sinal, e ninguem avisa.
module acumulador (
    input                    clk,
    input                    rst,
    input      signed [15:0] d,
    output reg signed [15:0] q
);

    always @(posedge clk) begin
        if (rst) q <= 16'sd0;
        else     q <= d;
    end

endmodule
