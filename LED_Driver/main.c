/*
 * main.c
 *
 *  Created on: Oct 27, 2023
 *      Author: user
 */
#include "stdTypes.h"
#include "errorStates.h"

#include "DIO_int.h"
#include "LED_config.h"
#include "LED_int.h"

#include <util/delay.h>
extern LED_t LED_AstrLedConfig [LED_NUM];

int main(void)
{
	DIO_enuInit();
	LED_enuInit(LED_AstrLedConfig);

	while (1)
	{

			LED_enuTurnON(&LED_AstrLedConfig[2]);
		_delay_ms(500);
			LED_enuTurnOFF(&LED_AstrLedConfig[2]);
			_delay_ms(500);
	}
}
