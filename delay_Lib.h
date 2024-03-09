void delay(unsigned int time_in_ms){
	int i, j;
	for(i=0; i<time_in_ms; i++){
		for(j=0; j<1275; j++);
	}
}