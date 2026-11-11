`timescale 1ns / 1ps

module proc_placa_tb;

    reg         CLOCK_50;
    reg  [1:0]  KEY;
    wire [6:0]  HEX0;
    wire [6:0]  HEX1;
    wire [6:0]  HEX2;
    wire [6:0]  HEX3;
    wire [6:0]  HEX4;
    wire [6:0]  HEX6;
    wire [6:0]  HEX7;
    wire [17:0] LEDR;
    wire [7:0]  LEDG;

    proc_placa dut (
        .CLOCK_50(CLOCK_50),
        .KEY     (KEY),
        .HEX0    (HEX0),
        .HEX1    (HEX1),
        .HEX2    (HEX2),
        .HEX3    (HEX3),
        .HEX4    (HEX4),
        .HEX6    (HEX6),
        .HEX7    (HEX7),
        .LEDR    (LEDR),
        .LEDG    (LEDG)
    );

    initial begin
        $dumpfile("proc_placa_tb.fst");
        $dumpvars(0, proc_placa_tb);

        CLOCK_50 = 0;
        KEY = 0;

        #100;
        $finish;
    end

endmodule
