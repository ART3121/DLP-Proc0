module proc_DE2_115 #(parameter N = 20) (
    input         CLOCK_50,
    input  [ 1:0] KEY,
    output [ 6:0] HEX0, HEX1, HEX2, HEX3, HEX4, HEX6, HEX7,
    output [17:0] LEDR,
    output [ 7:0] LEDG
);

// Wires
    wire [3:0] pc;
    wire stb_clk;
    wire signed [15:0] acc_out;
    wire neg;
    wire [7:0] instr;

// Assings
    assign LEDG = {neg, 6'b0, stb_clk};
    assign LEDR = instr;

// Instances
    debounce #(.N(N)) circ_db (
        .clk(CLOCK_50), 
        .key_n(KEY[0]), 
        .stb_clk(stb_clk));

    proc_prot proc (
        .clk(stb_clk), 
        .rst(~KEY[1]), 
        .acc_out(acc_out),
        .instr(instr) ,
        .addr_rom(pc)
    );

    display5 u_display (
        .n(acc_out),             
        .HEX0(HEX0),
        .HEX1(HEX1), 
        .HEX2(HEX2), 
        .HEX3(HEX3), 
        .HEX4(HEX4),
        .neg(neg)
    );

// PC Display 
    wire [3:0] unidade = (pc >= 4'd10) ? pc - 4'd10:pc;
    wire [3:0] dezena = (pc >= 4'd10) ? 4'd1:4'd0;
    dig7 d7 (.d(dezena),  .seg(HEX7));
    dig7 d6 (.d(unidade), .seg(HEX6));

endmodule
