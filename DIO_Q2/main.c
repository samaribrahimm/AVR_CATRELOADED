
// 7seg and sw
#include "stdTypes.h"
#include "Registers.h"
#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)
#define DDRB *((u8*)0x37)
#define PORTB *((u8*)0x38)
#define PINB *((volatile u8*)0x36)
#define PORTC *((u8*)0x35)
#define DDRC *((u8*)0x34)
#define PINC *((volatile u8*)0x33)
#define PORTD *((u8*)0x32)
#define DDRD *((u8*)0x31)
#define PIND *((volatile u8*)0x30)

int main(void){
	 u8 segcthd[]= {0x3f,0x06,0x5b,
			        0x4f,0x66,0x6d,
				    0x7d,0x07,0x7f,
	                0x6f};
	s8 button1,button2,count=0;

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
			count++;
			 while(((PINA>>0)&1)==0);
		}
		else if (button2==0){
			count--;
			 while(((PINA>>1)&1)==0);
		}
		if(count >9 )
			count =9;
		else if (count<0)
			count =0;
		PORTC =segcthd[count];
	}

	return 0;
}
