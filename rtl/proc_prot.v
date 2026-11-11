module proc_prot (
    input                    clk,
    input                    rst,
    output     signed [15:0] acc_out,
    output            [ 7:0] instr,
    output             [3:0] addr_rom
 );

// Wires
    wire        [15:0] sram_out;
    wire signed [15:0] rslt;
    wire         [7:0] data_rom;

//  Instruction Splitter 
    wire  [3:0] addr_ram    = data_rom [3:0];
    wire  [2:0] opcode_alu  = data_rom [6:4];  
    wire        we_ram      = data_rom [7];

// Instances
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
        .addr(addr_rom));

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
