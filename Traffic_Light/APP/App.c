/*
 * App.c
 *
 *  Created on: Mar 15, 2024
 *      Author: samar ibrahim
 */

#include "APP.h"



#include "../HAL/LED/LED_config.h"
#include "../HAL/LED/LED_int.h"
#include "../MCAL/GIE/GIE_int.h"
#include "../MCAL/EXTI/EXTI_int.h"
#include "../MCAL/TIMER/TIMER_init.h"
static int GlobalCounter=0;

extern LED_AstrLedConfig[LED_NUM];
void NormalModeForCar(void){

	for( GlobalCounter=0;GlobalCounter<3;GlobalCounter++){

		LED_enuTurnON(&LED_AstrLedConfig[GlobalCounter]);
	    TIMER0_enuSetsyncDelay(5000);
	    LED_enuTurnOFF(&LED_AstrLedConfig[GlobalCounter]);
	}
	for( GlobalCounter=1;GlobalCounter>=0;GlobalCounter--){
		LED_enuTurnON(&LED_AstrLedConfig[GlobalCounter]);
			    TIMER0_enuSetsyncDelay(5000);
			    LED_enuTurnOFF(&LED_AstrLedConfig[GlobalCounter]);
	}
}

void pedestrianMode(void){
	switch(GlobalCounter){
	case LED_RED_CAR:
		LED_enuTurnON(&LED_AstrLedConfig[LED_RED_CAR]);
		LED_enuTurnON(&LED_AstrLedConfig[LED_GREEN_pedestrian]);
		TIMER0_enuSetsyncDelay(5000);
		LED_enuTurnOFF(&LED_AstrLedConfig[LED_GREEN_pedestrian]);
		LED_enuTurnOFF(&LED_AstrLedConfig[LED_RED_CAR]);
		break;
	case LED_GREEN_CAR:
	case LED_YELLOW_CAR:
		LED_enuTurnON(&LED_AstrLedConfig[LED_YELLOW_pedestrian]);
		LED_enuTurnON(&LED_AstrLedConfig[LED_YELLOW_CAR]);
	    TIMER0_enuSetsyncDelay(5000);
	    LED_enuTurnOFF(&LED_AstrLedConfig[LED_YELLOW_pedestrian]);
	    LED_enuTurnOFF(&LED_AstrLedConfig[LED_YELLOW_CAR]);
	    LED_enuTurnON(&LED_AstrLedConfig[LED_RED_CAR]);
	    LED_enuTurnON(&LED_AstrLedConfig[LED_GREEN_pedestrian]);
	    TIMER0_enuSetsyncDelay(5000);
		break;



	}
}
