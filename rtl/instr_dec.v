`define ADD                     4'b0000
`define SUB                     4'b0001
`define MUL                     4'b0010
`define DIV                     4'b0011 
`define LOD                     4'b0100
`define NOP                     4'b0101
`define SET                     4'b0110
`define JMP                     4'b0111
`define HLT                     4'b1000

module instr_dec(
    input  [3:0] opcode,
    output       we,ld,
    output [2:0] op_ula
);
reg [4:0] data;

always @(*)begin
    case(opcode)
        `ADD: data = 5'b00000; // ADD
        `SUB: data = 5'b00001; // SUB
        `MUL: data = 5'b00010; // MLT
        `DIV: data = 5'b00011; // DIV
        `LOD: data = 5'b00100; // LOD
        `NOP: data = 5'b00101; // NOP
        `SET: data = 5'b01101; // SET
        `JMP: data = 5'b10101; // JMP
        `HLT: data = 5'b10101; // HLT
    endcase
end

assign op_ula = data[2:0];
assign we = data[3];
assign ld = data[4];

endmodule
