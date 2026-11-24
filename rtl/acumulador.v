module acumulador (
    input                    clk,
    input                    rst,
    input      signed [15:0] acc_in,
    output reg signed [15:0] acc_out
);

    always @(posedge clk) begin
        if (rst) acc_out <= 16'sd0;
        else     acc_out <= acc_in;
    end

endmodule
