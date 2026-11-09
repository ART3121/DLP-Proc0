module rom(
    input  [3:0] addr,
    output [7:0] data
);

    reg [7:0] mem [0:15];
    initial $readmemb("program/program.txt",mem);
    assign data = mem[addr];

endmodule