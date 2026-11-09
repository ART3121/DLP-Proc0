module proc_placa #(parameter N = 20) (
    input         CLOCK_50,
    input  [ 1:0] KEY,
    output [ 6:0] HEX0, HEX1, HEX2, HEX3, HEX4, HEX6, HEX7,
    output [17:0] LEDR,
    output [ 7:0] LEDG
);

// Fios
    wire [3:0] pc;
    wire passo;
    wire signed [15:0] acc;
    wire neg;
    wire [7:0] instr;
   
// Instâncias
    debounce #(.N(N)) circ_db (.clk(CLOCK_50), .key_n(KEY[0]), .estavel(passo));

    my_proc proc (.clk(passo), .rst(~KEY[1]), .acc(acc),.instr(instr) ,.pc(pc));

    display5 mostra (.n(acc),
                     .HEX0(HEX0), .HEX1(HEX1), .HEX2(HEX2), .HEX3(HEX3), .HEX4(HEX4),
                     .neg(neg));

// PC no Display a esquerda, em decimal 
    wire [3:0] unidade = (pc >= 4'd10) ? pc - 4'd10:pc;
    wire [3:0] dezena = (pc >= 4'd10) ? 4'd1:4'd0;
    dig7 d7 (.d(dezena),  .seg(HEX7));
    
    dig7 d6 (.d(unidade), .seg(HEX6));

// Lógica da Placa
    wire [15:0] modulo = neg ? -acc : acc;
    assign LEDG = {neg, 7'b0, passo};    // LEDG[0]: o botao, ja limpo
    assign LEDR = instr;

endmodule
