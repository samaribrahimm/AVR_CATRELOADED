/*
 * main.c

 *
 *  Created on: Mar 15, 2024
 *      Author: user
 */
#include "../LIB/errorStates.h"
#include "../MCAL/DIO/DIO_int.h"



#include "../MCAL/TIMER/TIMER_init.h"

#include "../LED/LED_config.h"
#include "../LED/LED_int.h"
#include <util/delay.h>
extern LED_t LED_AstrLedConfig [LED_NUM];
void main(void){

	DIO_enuInit();
	TIMER0_enuInit();
	LED_enuInit( LED_AstrLedConfig);
	DIO_enuSetPinDirection(DIO_u8PIN2,DIO_u8PORTA,DIO_u8OUTPUT);
	DIO_enuSetPinDirection(DIO_u8PIN2,DIO_u8PORTA,DIO_u8OUTPUT);
	LED_enuInit(LED_AstrLedConfig);
	while(1){

		LED_enuTurnON(&LED_AstrLedConfig[2]);
		TIMER0_enuSetsyncDelay(1000);

	LED_enuTurnOFF(&LED_AstrLedConfig[2]);
	 TIMER0_enuSetsyncDelay(1000);


	}
}
