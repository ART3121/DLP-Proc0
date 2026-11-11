
module control_unit (
    input       [3:0] op,
    input             zero,
    output  reg [2:0] alu_op.
    output  reg        acc_we,ram_we,pc_load,halt
); 

    always@(*) begin
        alu_op  = 3'b000;
        acc_we  = 1'b0;
        ram_we  = 1'b0;
        pc_load = 1'b0;
        halt    = 1'b0;

        case(opcode)
            4'b0000,         
            4'b0001,         
            4'b0010,         
            4'b0011,         
            4'b0100: begin
                alu_op = opcode[2:0];
                acc_we = 1;
            end
        4'b0101: ram_we = 1;
        
        4'b0101: pc_load = 1;
        4'b0111: pc_load = zero ;
        4'b1000: halt    = 1;
        default: ;
        endcase
    end
endmodule


