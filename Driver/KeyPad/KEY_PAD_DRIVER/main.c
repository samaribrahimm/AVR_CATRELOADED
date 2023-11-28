/*
 * main.c
 *
 *  Created on: Nov 27, 2023
 *      Author: user
 */


#define F_CPU 1000000UL

#include "errorStates.h"
#include "stdTypes.h"

#include "DIO_int.h"
#include "DIO_config.h"

#include "LCD_int.h"
#include "LCD_Config.h"

#include "KeyPad_int.h"
#include "KeyPad_Config.h"

#include "util/delay.h"
int main(void)
{
	LCD_enuInit();
LCD_enuWriteString("Welcome",0,0);
LCD_vidClearScreen();
	Keypad_enuInit();

LCD_vidClearScreen();
	u8 Local_u8KeyPressed;

    /* Replace with your application code */
    while (1)
    {
    	Keypad_enuGetPressedKey(&Local_u8KeyPressed);
    	if(Local_u8KeyPressed==KEY_NOT_PRESSED){

    	}
    	else if(Local_u8KeyPressed=='c'){
    		LCD_vidClearScreen();
    	}
    	else if(Local_u8KeyPressed!=KEY_NOT_PRESSED){
    		LCD_enuDisplayChar(Local_u8KeyPressed);
    	}

    }
}
