/*
 * App.c
 *
 *  Created on: Mar 15, 2024
 *      Author: samar ibrahim
 */

#include "APP.h"
#include "../LIB/stdTypes.h"
#include "../LIB/errorStates.h"

#include "../MCAL/DIO/DIO_int.h"
#include "../HAL/LED_config.h"
#include "../HAL/LED_int.h"
#include "../MCAL/EXTI/EXTI_Config.h"
#include "../MCAL/EXTI/EXTI_int.h"
#include "../MCAL/GIE/GIE_int.h"
#include "../MCAL/interrupt.h"
static int GlobalCounter=0;
static int state =NormalMode;
extern LED_t LED_AstrLedConfig [LED_NUM];
extern EXTI_t EXTI_AstrEXTIConfig[3];
void APP_Init(){

	/*PIN for leds*/

	/*PIN for interrupt */
			DIO_enuSetPinDirection(DIO_u8PORTD, DIO_u8PIN2, DIO_u8INPUT);
			DIO_enuSetPinVal(DIO_u8PORTD, DIO_u8PIN2, DIO_u8PULLUP);




		 EXTI_enuInit(EXTI_AstrEXTIConfig);


		 int ptr=0;
			 EXTI_enuCallBack(SWitchingforNormalmodetopedestrianMode(),&ptr , 0);


			/* Enable INT0 ,*/
			EXTI_enuEnableINT(0);


			/* enable global interrupt */
			GIE_enuGloable_Interrupt_Enable();

}
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
		 LED_enuTurnON(&LED_AstrLedConfig[LED_RED_pedestrian]);
		 TIMER0_enuSetsyncDelay(2000);
		 LED_enuTurnOFF(&LED_AstrLedConfig[LED_RED_pedestrian]);
		 LED_enuTurnON(&LED_AstrLedConfig[LED_YELLOW_pedestrian]);
		 LED_enuTurnON(&LED_AstrLedConfig[LED_YELLOW_CAR]);
		 TIMER0_enuSetsyncDelay(5000);
		 LED_enuTurnOFF(&LED_AstrLedConfig[LED_YELLOW_pedestrian]);
		 LED_enuTurnOFF(&LED_AstrLedConfig[LED_YELLOW_CAR]);
		 LED_enuTurnON(&LED_AstrLedConfig[LED_RED_CAR]);
		 LED_enuTurnON(&LED_AstrLedConfig[LED_GREEN_pedestrian]);
		 TIMER0_enuSetsyncDelay(5000);
		 LED_enuTurnOFF(&LED_AstrLedConfig[LED_RED_CAR]);
		 LED_enuTurnON(&LED_AstrLedConfig[LED_YELLOW_CAR]);
		 LED_enuTurnON(&LED_AstrLedConfig[LED_GREEN_pedestrian]);
		 TIMER0_enuSetsyncDelay(5000);
		 break;




	}
}
void TRAFFIC_CONTROL_enuRunSystem(void)
{


	switch(state)
	{
		case NormalMode:
			NormalModeForCar();
		break;

		case PedestrianMode:
		pedestrianMode();
		break;
	}


}
volatile void SWitchingforNormalmodetopedestrianMode(){
	state =PedestrianMode;
}
