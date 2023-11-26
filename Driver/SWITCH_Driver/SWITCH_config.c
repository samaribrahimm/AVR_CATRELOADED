/*
 * SWITCH_config.c
 *
 *  Created on: Oct 26, 2023
 *      Author: user
 */
#include "stdTypes.h"
#include "errorStates.h"
#include "Switch_priv.h"
#include "Switch_config.h"
#include "DIO_int.h"

SW_t Switch_AstrSwitchStatus[SW_NUM ]={
		{DIO_u8PORTA,DIO_u8PIN0,DIO_u8PULLUP},
		{DIO_u8PORTB,DIO_u8PIN2,DIO_u8PULLUP},
		{DIO_u8PORTC,DIO_u8PIN3,DIO_u8FLOAT}
};
