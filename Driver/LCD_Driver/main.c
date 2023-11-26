/*
 * main.c
 *
 *  Created on: Nov 24, 2023
 *      Author: user
 */


#include "stdTypes.h"
#include "errorStates.h"

#include "DIO_int.h"

#include "LCD_int.h"

#include "util/delay.h"

int main (void)
{LCD_enuInit();

//LCD_enuWriteString("33 ",0,2);
//LCD_enuWriteString("samar ibrahim Ahmed el ",0,2);
LCD_enuDisplayNum(-456);
//LCD_enuGoToPosition(1,2);




while (1);
return 0;}
