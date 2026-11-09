`timescale 1ns/1ps
// Bancada do processador na placa (C5G): o programa vem da rom (program.txt),
// uma instrucao por aperto que TREPIDA. Filtro com N = 4 para a simulacao caber.
//
//   reset -> acc = 0, PC = 0   (KEY[1] segurado e um aperto do KEY[0])
//   depois, 16 apertos: 0, 1, 2, 6, 24, 120, 720, 5040, 840, 35, 35, ...
//
// Se o debounce falhasse, cada trepidacao executaria uma instrucao a mais.
module tb_proc_placa;

    reg         CLOCK_50 = 0;
    reg  [ 1:0] KEY = 2'b11;          // os dois soltos
    wire [ 6:0] HEX0, HEX1, HEX2, HEX3;
    wire [ 2:0] LEDR;
    wire [ 7:0] LEDG;

    proc_placa #(.N(4)) dut (.CLOCK_50(CLOCK_50), .KEY(KEY),
                             .HEX0(HEX0), .HEX1(HEX1), .HEX2(HEX2), .HEX3(HEX3),
                             .LEDR(LEDR), .LEDG(LEDG));

    always #10 CLOCK_50 = ~CLOCK_50;

    // um aperto do KEY[0], com trepidacao na descida e na subida
    task passo;
        begin
            KEY[0] = 0; #40;  KEY[0] = 1; #30;  KEY[0] = 0; #60;  KEY[0] = 1; #20;
            KEY[0] = 0;  #2000;
            KEY[0] = 1; #50;  KEY[0] = 0; #30;  KEY[0] = 1;  #2000;
        end
    endtask

    reg signed [15:0] esperado [0:15];
    integer k, erros;

    initial begin
        esperado[0] = 0;     esperado[1] = 1;     esperado[2] = 2;    esperado[3] = 6;
        esperado[4] = 24;    esperado[5] = 120;   esperado[6] = 720;  esperado[7] = 5040;
        esperado[8] = 840;   esperado[9] = 35;
        for (k = 10; k < 16; k = k + 1) esperado[k] = 35;

        erros = 0;
        KEY[1] = 0; #100; passo; KEY[1] = 1; #200;    // reset: segura o KEY[1] e aperta o KEY[0]
        $display("depois do reset          ->   acc = %6d", dut.acc);

        for (k = 0; k < 16; k = k + 1) begin
            $display("addr %2d: op = %b, b = %4d   ->", dut.addr, dut.SW[9:8], $signed(dut.SW[7:0]));
            passo;
            $display("                              acc = %6d  (esperado %6d)%s",
                     dut.acc, esperado[k], dut.acc === esperado[k] ? "" : "  ERRO");
            if (dut.acc !== esperado[k]) erros = erros + 1;
        end

        if (erros == 0) $display("OK: 7! = 5040 e C(7,3) = 35");
        else            $display("FALHOU: %0d erros", erros);
        $finish;
    end

endmodule
