/*
 * main.c
 *
 *  Created on: Oct 27, 2023
 *      Author: samar ibrahim
 */


#include "stdTypes.h"
#include "errorStates.h"
#include "DIO_int.h"
#include "Switch_config.h"
#include "Switch_int.h"

extern SW_t Switch_AstrSwitchStatus [SW_NUM];
int main(void)
{
	DIO_enuInit();
SWITCH_enuInit(Switch_AstrSwitchStatus);
u8 pinstate;
	while(1)
	{
SWITCH_enuGetStatus(&Switch_AstrSwitchStatus[1],&pinstate);
if (pinstate ==0)
		{
DIO_enuSetPinVal(DIO_u8PORTB, DIO_u8PIN0 , DIO_u8HIGH);

		}
		else
		{
			DIO_enuSetPinVal(DIO_u8PORTB, DIO_u8PIN0 , DIO_u8LOW);
		}

	}
}


