module half_adder
(
	i_bit1,
	i_bit2,
	o_sum,
	o_carry,
);

input i_bit1;
input i_bit2;
output o_sum;
output o_carry;

assign o_sum = i_bit1 ^ i_bit2;
assign o_carry = i_bit1 & i_bit2;

endmodule


module half_adder_tb;

reg r_BIT1 = 0;
reg r_BIT2 = 0;
wire w_SUM;
wire w_CARRY;


half_adder half_adder_inst
(
	.i_bit1(r_BIT1),
	.i_bit2(r_BIT2),
	.o_sum(w_SUM),
	.o_carry(w_CARRY)
);

initial
begin 
$dumpfile("dump.vcd");
$dumpvars(1);
$monitor(r_BIT1,r_BIT2,w_SUM,w_CARRY);

$display(" First input: 00");
r_BIT1 = 1'b0;
r_BIT2 = 1'b0;
display;
#10;


$display(" First input: 00");
r_BIT1 = 1'b0;
r_BIT2 = 1'b1;
display;
#10;

$display(" First input: 00");
r_BIT1 = 1'b1;
r_BIT2 = 1'b0;
display;
#10;

$display(" First input: 00");
r_BIT1 = 1'b1;
r_BIT2 = 1'b1;
display;
#10;
end

task display;
	#10 $display("i_bit1:%0h, i_bit2:%0h, o_sum:%0h, o_carry:%0h\n",r_BIT1,r_BIT2,w_SUM,w_CARRY);
endtask

initial #100 $finish;
endmodule
