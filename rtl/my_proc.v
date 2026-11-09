module my_proc (
    input                    clk,
    input                    rst,
    output     signed [15:0] acc,
    output            [ 7:0] instr,
    output             [3:0] pc
 );

// Fios
    wire         [7:0] data_rom;
    wire         [2:0] op;
    wire         [3:0] addr;
    wire        [15:0] b;
    wire signed [15:0] resultado;

// Instâncias
    ram        memoria_ram(.clk(clk),.we(data_rom[7]),.addr(data_rom[3:0]),.din(acc),.dout(b));

    rom        memoria_rom(addr,data_rom);

    pc_counter PC (clk,rst,addr);

    ula16s     alu     (.a(acc), .b(b), .op(data_rom[6:4]), .r(resultado));
    
    acumulador acc_reg (.clk(clk), .rst(rst), .d(resultado), .q(acc));

// Lógica
    assign instr = data_rom;
    assign pc = addr;

endmodule
