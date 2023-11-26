#include"stdTypes.h"
#include<util/delay.h>
#include "Registers.h"





int main(void){
	// led is output ,is off
	DDRA= 0xff;
	PORTA=0x00;

	// sw is input ,pullup
	DDRB=0x00;
	PORTB=0Xff;
	u8 	B1,B2,B3;


	while(1){


B1 =((PINB>>0)&1);
B2 =((PINB>>1)&1);
B3 =((PINB>>2)&1);
               if(B1==0){
            	   _delay_ms(5);
            	   if(B1==0){
            	 PORTA|=(1<<0);
            	 PORTA&=~(1<<1);
            	   				}
               }

				else if(B2==0){
					PORTA&=~(1<<0);
					PORTA|=(1<<1);
				}
				else if(B3==0){
					PORTA|=(1<<0);
					PORTA|=(1<<1);
				}
				else{
					PORTA=0X00;
				}
	}
return 0;}




