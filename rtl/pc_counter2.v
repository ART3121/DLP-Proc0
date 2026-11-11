module pc_counter2(
    input clk, rst, load,halt,
    input   [3:0] target
    output  reg [3:0] addr.
);

    always @(posedge clk) begin
        if (rst) addr <= 4'b0000;
        else if(halt) addr <= addr;   // HALT
        else if(load) addr <= target; // JUMP
        else          addr <- addr + 4'd0001; // Normal PC
    end
endmodule