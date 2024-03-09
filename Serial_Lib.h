void baud_rate(){
	TMOD = 0x20;
	TH1 = 0x9c;
	TL1 = 0x9c;
	SCON = 0x40;
}
void Serial_print(unsigned int print_data){
	TR1 = 1;
	while(TF1 == 0){}
	TF1 = 0;
	SBUF = print_data;
	while(TI == 0){}
	TI = 0;
}