/*
 * Ping_Pong.c
 *
 *  Created on: Feb 11, 2024
 *      Author: samar ibrahim
 */
#include "../LIB/stdTypes.h"
#include <util/delay.h>
// use to determine if player play or not
u8 Global_u8Player1=0;
u8 Global_u8Player2=0;

//use to determine score
u8 Global_u8Score1=0;
u8 Global_u8Score2=0;

u8 Global_u8Ball_row=2;
u8 Global_u8Ball_col=14;
void Ping_PongInit(){



	LCD_enuWriteString("P1:",0,0);
	LCD_enuGoToPosition(0,4);
	LCD_enuDisplayNum(Global_u8Score1);
	LCD_enuWriteString("P2:",0,12);
	LCD_enuGoToPosition(0,15);
	LCD_enuDisplayNum(Global_u8Score2);
    LCD_enuGoToPosition(2,0);
    LCD_enuDisplayChar('|');
    LCD_enuGoToPosition(2,15);
     LCD_enuDisplayChar('|');
   _delay_ms(500);

}


 void Move_ball_Right(){
	for(;Global_u8Ball_col<14;Global_u8Ball_col++){
		Global_u8Ball_row=(Global_u8Ball_col&1)+2;
		LCD_enuGoToPosition(Global_u8Ball_row,Global_u8Ball_col);
					LCD_enuDisplayChar('O');
					_delay_ms(100);
					LCD_enuGoToPosition(Global_u8Ball_row,Global_u8Ball_col);
							LCD_enuDisplayChar(' ');

		}
}
void Move_ball_Left(){
	for(;Global_u8Ball_col>1;Global_u8Ball_col--){
			Global_u8Ball_row=(Global_u8Ball_col&1)+2;
			LCD_enuGoToPosition(Global_u8Ball_row,Global_u8Ball_col);
			LCD_enuDisplayChar('O');
			_delay_ms(100);
			LCD_enuGoToPosition(Global_u8Ball_row,Global_u8Ball_col);
					LCD_enuDisplayChar(' ');

		}
}

void Check_Winner(){
	_delay_ms(100);
	if( Global_u8Player1== Global_u8Player2 &&Global_u8Player1>0&& Global_u8Player2>0){

	}
	else if( Global_u8Player1> Global_u8Player2){

		LCD_vidClearScreen();
		LCD_enuWriteString("PLAYER 1 win",1,1);
		_delay_ms(500);

		LCD_vidClearScreen();
		Global_u8Score1++;
		Ping_PongInit();
		Global_u8Ball_col=1;
		Global_u8Ball_row =2;

	}
	else if(  Global_u8Player2 > Global_u8Player1){

			LCD_vidClearScreen();
			LCD_enuWriteString("PLAYER 2 win",1,1);
			_delay_ms(500);

			LCD_vidClearScreen();
			Global_u8Score2++;
			Ping_PongInit();
			Global_u8Ball_col=14;
			Global_u8Ball_row =2;
		}
	 Global_u8Player1=0;
	 Global_u8Player2=0;
}

//ISR FUN
volatile void Racket1(void* ptr){





	//LCD_enuWriteString("PLAYER 1 win",1,1);

	//_delay_ms(50);
	Global_u8Player1+=1;
	Move_ball_Right();




}
volatile void Racket2(void* ptr){




		//LCD_enuWriteString("PLAYER 2 win",1,1);
		//_delay_ms(50);
	   Global_u8Player2+=1;
		Move_ball_Left();


}
