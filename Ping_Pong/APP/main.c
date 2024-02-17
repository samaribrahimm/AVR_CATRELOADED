/*
 * main.c
 *
 *  Created on: Feb 11, 2024
 *      Author: samar ibrahim
 */

#include "../LIB/errorStates.h"
#include "../LIB/stdTypes.h"

#include "../MCAL/DIO/DIO_config.h"
#include "../MCAL/DIO/DIO_int.h"

#include "../MCAL/EXTI/EXTI_config.h"
#include "../MCAL/EXTI/EXTI_int.h"

#include "../MCAL/GIE/GIE_int.h"
#include"Ping_Pong.h"
//#include "Ping_Pong.c"

#include <util/delay.h>
extern EXTI_t EXTI_AstrEXTIConfig[3];



void main(void)
{
 DIO_enuInit();

   /*PIN for interrupt */
	DIO_enuSetPinDirection(DIO_u8PORTD, DIO_u8PIN2, DIO_u8INPUT);
	DIO_enuSetPinVal(DIO_u8PORTD, DIO_u8PIN2, DIO_u8PULLUP);
	DIO_enuSetPinDirection(DIO_u8PORTD, DIO_u8PIN3, DIO_u8INPUT);
	DIO_enuSetPinVal(DIO_u8PORTD, DIO_u8PIN3, DIO_u8PULLUP);


 LCD_enuInit();

 EXTI_enuInit(EXTI_AstrEXTIConfig);


 int ptr=0;
	 EXTI_enuCallBack(&Racket1,&ptr , 0);
	 EXTI_enuCallBack(&Racket2,&ptr, 1);

	/* Enable INT0 ,INT1*/
	EXTI_enuEnableINT(INT0);
	EXTI_enuEnableINT(INT1);

	/* enable global interrupt */
	GIE_enuGloable_Interrupt_Enable();




	LCD_enuWriteString("Welcome To",0,0);
	LCD_enuWriteString("PING PONG GAME",1,1);
	_delay_ms(500);
	LCD_vidClearScreen();


    Ping_PongInit();

		while(1)
		{

Check_Winner();


		}
}
