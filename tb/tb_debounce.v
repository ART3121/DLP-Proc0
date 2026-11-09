`timescale 1ns/1ps
// Bancada do debounce: um botao que TREPIDA a cada aperto e a cada soltura.
//
// Para a simulacao nao ficar enorme, o filtro usa N = 4 (16 ciclos = 320 ns)
// em vez de N = 20 (21 ms). A trepidacao tambem e encurtada na mesma escala.
//
// Abram key_n e estavel. Contem: quantas vezes key_n desceu, e quantas
// vezes o estavel subiu?
module tb_debounce;

    reg  clk = 0;
    reg  key_n = 1;                  // solto
    wire estavel;

    debounce #(.N(4)) dut (.clk(clk), .key_n(key_n), .estavel(estavel));

    always #10 clk = ~clk;           // 50 MHz

    integer descidas = 0, subidas = 0;
    always @(negedge key_n) descidas = descidas + 1;
    always @(posedge estavel) subidas = subidas + 1;

    // um aperto de verdade: trepida, assenta, fica apertado, trepida ao soltar
    task aperta;
        begin
            key_n = 0; #40;  key_n = 1; #30;  key_n = 0; #60;
            key_n = 1; #20;  key_n = 0; #50;  key_n = 1; #30;
            key_n = 0;  #2000;                       // apertado e parado
            key_n = 1; #50;  key_n = 0; #30;  key_n = 1; #40;
            key_n = 0; #20;  key_n = 1;  #2000;      // solto e parado
        end
    endtask

    initial begin
        #200;
        aperta;
        aperta;
        aperta;
        $display("3 apertos: key_n desceu %0d vezes, e o estavel subiu %0d vezes", descidas, subidas);
        $finish;
    end

endmodule
