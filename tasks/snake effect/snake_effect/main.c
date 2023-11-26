#include <util/delay.h>
//snake effect
typedef unsigned char u8;

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)
int main (void){

	for(int i=0 ;i<8;i++){
		DDRA|=(1<<i);
	}
	while(1){
		for(int i=0 ;i<8;i++){
			PORTA|=(1<<i);
			_delay_ms(500);
		}
		for(int i=0 ;i<8;i++){
			PORTA &=~(1<<i);
			_delay_ms(500);
		}
	}

	return 0;
}
