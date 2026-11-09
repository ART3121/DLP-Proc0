// Quebra um numero de 0 a 65535 em 5 digitos decimais, pelo "double dabble":
// desloca um bit por vez para a esquerda e, antes de cada deslocamento, soma 3
// em todo digito que valer 5 ou mais. So usa comparacao e soma: 201 elementos
// logicos no circuito inteiro, contra 1135 com / e %.
// O "for" nao e um laco que roda no tempo: o sintetizador o desenrola em 16
// copias do mesmo pedaco de circuito, uma para cada bit.
module decimal16_dabble (input [15:0] m, output [3:0] d0, d1, d2, d3, d4);
    reg [19:0] bcd;
    integer i;
    always @(*) begin
        bcd = 20'd0;
        for (i = 15; i >= 0; i = i - 1) begin
            if (bcd[3:0]   >= 5) bcd[3:0]   = bcd[3:0]   + 3;
            if (bcd[7:4]   >= 5) bcd[7:4]   = bcd[7:4]   + 3;
            if (bcd[11:8]  >= 5) bcd[11:8]  = bcd[11:8]  + 3;
            if (bcd[15:12] >= 5) bcd[15:12] = bcd[15:12] + 3;
            if (bcd[19:16] >= 5) bcd[19:16] = bcd[19:16] + 3;
            bcd = {bcd[18:0], m[i]};
        end
    end
    assign {d4, d3, d2, d1, d0} = bcd;
endmodule
