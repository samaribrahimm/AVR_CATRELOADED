
// 7seg and sw
#include "stdTypes.h"
#include "Registers.h"


int main(void){
	 u8 segcthd[]= {0x3f,0x06,0x5b,
			        0x4f,0x66,0x6d,
				    0x7d,0x07,0x7f,
	                0x6f};
	s8 button1,button2,counter=0;

	// sw is input ,pullup
	DDRA=0x00;
	PORTA=0xff;
	// output ,is off
	DDRC=0xff;
	PORTC=0x00;

	while(1){
		button1 =((PINA>>0)&1);
		button2 =((PINA>>1)&1);
		if(button1==0){
			counter++;
			 while(((PINA>>0)&1)==0);
		}
		else if (button2==0){
			counter--;
			 while(((PINA>>1)&1)==0);
		}
		if(counter >9 )
			counter =9;
		else if (counter<0)
			count =0;
		PORTC =segcthd[counter];
	}

	return 0;
}
