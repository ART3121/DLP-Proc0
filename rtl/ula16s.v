`define ADD                     3'b000
`define SUB                     3'b001
`define MUL                     3'b010
`define DIV                     3'b011 
`define LOAD                    3'b100

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
            `ADD :   r = a + b;
            `SUB :   r = a - b;
            `MUL :   r = a * b;
            `DIV :   r = a / b;
            `LOAD:   r = b;
            default: r = a;
        endcase
    end

endmodule
