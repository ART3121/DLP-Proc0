// O contador de programa. O reset e o mesmo do acumulador (sincrono): segurar
// o KEY[1] e apertar o KEY[0] zera o acc e volta o programa para o endereco 0.
module pc_counter (
    input            clk,
    input            rst,
    output reg [3:0] addr
);
    always @(posedge clk) begin
        if (rst) addr <= 4'd0;
        else     addr <= addr + 4'd1;
    end

endmodule
