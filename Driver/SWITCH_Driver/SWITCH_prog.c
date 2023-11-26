/*
 * SWITCH_prog.c
 *
 *  Created on: Oct 26, 2023
 *      Author: samar ibrahim
 */
#include "stdTypes.h"
#include "errorStates.h"


#include "Switch_config.h"

#include "DIO_int.h"


ES_t SWITCH_enuInit(SW_t *Copy_AstrSwitchs){
	ES_t Local_enuErrorState = ES_NOK;
	u8 Local_u8Iterator=0;
	if(Copy_AstrSwitchs!=NULL){
		for(Local_u8Iterator=0;Local_u8Iterator<SW_NUM;Local_u8Iterator++){
			Local_enuErrorState =DIO_enuSetPinDirection(Copy_AstrSwitchs[Local_u8Iterator].SW_PortID,Copy_AstrSwitchs[Local_u8Iterator].SW_PinID,DIO_u8INPUT);
			Local_enuErrorState = DIO_enuSetPinVal(Copy_AstrSwitchs[Local_u8Iterator].SW_PortID,Copy_AstrSwitchs[Local_u8Iterator].SW_PinID,Copy_AstrSwitchs[Local_u8Iterator].SW_Status);
		}
	}
	else{
		 Local_enuErrorState = ES_NULL_POINTER;
	}
	return Local_enuErrorState;
}

ES_t SWITCH_enuGetStatus(SW_t *Copy_AstrSwitchs,u8 *Copy_pu8SwStatus){
	ES_t Local_enuErrorState = ES_NOK;
	if(Copy_AstrSwitchs!=NULL && Copy_pu8SwStatus!=NULL){
		Local_enuErrorState=DIO_enuGetPinVal(Copy_AstrSwitchs->SW_PortID,Copy_AstrSwitchs->SW_PinID,Copy_pu8SwStatus);
	}
	else{
		Local_enuErrorState=ES_NULL_POINTER;
	}

	return Local_enuErrorState;
}
