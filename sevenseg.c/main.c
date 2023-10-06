
// 7seg and sw
#include "stdTypes.h"
#include "Registers.h"


int main(void){
	 u8 segcthd[]= {0x3f,0x06,0x5b,
			        0x4f,0x66,0x6d,
				    0x7d,0x07,0x7f,
	                0x6f};
	s8 button1,button2,counter=0,one,deci;

	// sw is input ,pullup
	DDRC=0x00;
	PORTC=0xff;
	// output ,is off FIRST 7SEG
	DDRA=0xff;
	PORTA=0x00;
	// output ,is off second 7SEG
	DDRB=0xff;


	while(1){

		button1 =((PINC>>0)&1);
		button2 =((PINC>>1)&1);
		if(button1==0){
			counter++;
			 while(((PINC>>0)&1)==0);
		}
		else if (button2==0){
			counter--;
						 while(((PINC>>1)&1)==0);
					}


		if(counter >99)
			counter =0;
		else if (counter<=0)
			counter =50;

		one=counter%10;
		deci=counter/10;
		PORTA =segcthd[one];
		PORTB =~segcthd[deci];
	}}

