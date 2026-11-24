module instr_dec(
    input  [3:0] opcode,
    output       we,ld,
    output [2:0] op_ula
);
reg [4:0] data;

always @(*)begin
    case(opcode)
        4'b0000: data = 5'b00000; // ADD
        4'b0001: data = 5'b00001; // SUB
        4'b0010: data = 5'b00010; // MLT
        4'b0011: data = 5'b00011; // DIV
        4'b0100: data = 5'b00100; // LOD
        4'b0101: data = 5'b00101; // NOP
        4'b0110: data = 5'b01101; // SET
        4'b0111: data = 5'b10101; // JMP
        4'b1000: data = 5'b10101; // HLT
    endcase
end

assign op_ula = data[2:0];
assign we = data[3];
assign ld = data[4];

endmodule
