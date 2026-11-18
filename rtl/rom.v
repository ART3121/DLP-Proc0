module rom(
    input  [3:0] addr,
    output [8:0] data
);

    reg [8:0] mem [0:15];
    initial $readmemb("program/programa.txt",mem);
    assign data = mem[addr];

endmodule