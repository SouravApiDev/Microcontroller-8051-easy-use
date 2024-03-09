#include "delay_Lib.h"
#include "pin_std_Lib.h"
#include "Serial_Lib.h"
int main(){
	int i;
	void baud_rate();
	while(1){
		//D8 = HIGH;
		for(i = 65; i<91; i++){
			Serial_print(i);
			delay(100);
		}
		delay(500);
	  //D8 = LOW;
		//delay(500);
	}
}
