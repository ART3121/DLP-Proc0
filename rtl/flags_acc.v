// flags_acc -- tres sinalizadores sobre o acumulador e a proxima instrucao.
//
//   zero : o acc vale 0
//   par  : o acc e par (bit 0 igual a 0)
//   div0 : a PROXIMA instrucao (op, b, ainda nas chaves) divide por zero;
//          se o programa executasse esse aperto, o resultado nao teria sentido
//
// Tudo combinacional: so le o que o proc_placa ja tem, nao muda o caminho de dados.
module flags_acc (
    input signed [15:0] acc,
    input signed [15:0] b,
    input        [ 1:0] op,
    output              zero,
    output              par,
    output              div0
);

    assign zero = (acc == 16'sd0);
    assign par  = ~acc[0];
    assign div0 = (op == 2'b11) && (b == 16'sd0);

endmodule
