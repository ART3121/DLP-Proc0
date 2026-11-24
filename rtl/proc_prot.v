module proc_prot (
    input                    clk,
    input                    rst,
    output     signed [15:0] acc_out,
    output             [7:0] instr,
    output             [3:0] addr_rom
 );

// Wires
    wire        [15:0] sram_out;
    wire signed [15:0] rslt;
    wire         [7:0] data_rom;

//  Instruction Splitter 
    wire  [3:0] addr_ram    = data_rom [3:0];
    wire  [3:0] opcode      = data_rom [7:4];
    wire        load_pc;     
    wire  [2:0] opcode_alu;   
    wire        we_ram;      

// Instances
    instr_dec u_dec(
        .opcode(opcode),
        .op_ula(opcode_alu),
        .we(we_ram),
        .ld(load_pc)
    );

    ram u_ram(
        .clk(clk),
        .we(we_ram),
        .addr(addr_ram),
        .data_in(acc_out),
        .data_out(sram_out)
    );

    rom u_rom (
        .addr(addr_rom),
        .data(data_rom)
    );

    pc_counter PC (
        .clk(clk),
        .rst(rst),
        .addr(addr_rom),
        .target(addr_ram),
        .load(load_pc)
    );

    ula16s ula0 (
        .acc_out(acc_out), 
        .sram_out(sram_out), 
        .op(opcode_alu), 
        .r(rslt)
    );
    
    acumulador acc_reg (
        .clk(clk), 
        .rst(rst), 
        .acc_in(rslt), 
        .acc_out(acc_out)
    );

// Assign
    assign instr = data_rom;

endmodule
