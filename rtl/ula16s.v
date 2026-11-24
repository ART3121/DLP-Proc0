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
            3'b000:  r = a + b; // ADD
            3'b001:  r = a - b; // SUB
            3'b010:  r = a * b; // MUL
            3'b011:  r = a / b; // DIV
            3'b100:  r = b;     // LOAD
            3'b101:  r = a;     // NOP
            default: r = a;
        endcase
    end

endmodule
