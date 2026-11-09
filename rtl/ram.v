module ram (
    input              clk,we,
    input        [3:0] addr,
    input       [15:0] din,
    output      [15:0] dout
);
    reg [15:0] mem [0:15];

    initial $readmemb("program/dados.txt",mem);
    always@(posedge clk) begin
        if(we) mem[addr] <= din;
    end
    assign dout = mem[addr];  
    
endmodule
