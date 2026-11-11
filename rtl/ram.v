module ram (
    input              clk,we,
    input        [3:0] addr,
    input       [15:0] data_in,
    output      [15:0] data_out
);
    reg [15:0] mem [0:15];

    initial $readmemb("program/dados.txt",mem);
    always@(posedge clk) begin
        if(we) mem[addr] <= data_in;
    end
    assign data_out = mem[addr];  
    
endmodule
