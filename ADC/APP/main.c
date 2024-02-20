/*
 * main.c
 *
 *  Created on: Feb 20, 2024
 *      Author: samar ibrahim
 */


#include "../LIB/errorStates.h"
#include "../LIB/stdTypes.h"

#include "../HAL/LCD/LCD_config.h"
#include "../HAL/LCD/LCD_int.h"

#include "../MCAL/ADC/ADC_config.h"
#include "../MCAL/ADC/ADC_int.h"

#include "../MCAL/DIO/DIO_config.h"
#include "../MCAL/DIO/DIO_int.h"

#include "../MCAL/EXTI/EXTI_config.h"
#include "../MCAL/EXTI/EXTI_int.h"

#include "../MCAL/GIE/GIE_int.h"


#include <util/delay.h>

extern EXTI_t EXTI_AstrEXTIConfig[3];

 void Read_POT(void *ptr);

int main(void)
{
	u8 ADC_Read = 0;
	DIO_enuSetPortDirection(DIO_u8PORTC, 0xFF);
	DIO_enuSetPinDirection(DIO_u8PORTA, DIO_u8PIN2, DIO_u8INPUT);

	DIO_enuSetPinDirection(DIO_u8PORTD, DIO_u8PIN2, DIO_u8INPUT);
	DIO_enuSetPinVal(DIO_u8PORTD, DIO_u8PIN2, DIO_u8PULLUP);



	ADC_enuInit();
	ADC_enuSelectChannel(ADC2);
	ADC_enuDisableTriggerMode();


	ADC_enuEnable();
	ADC_enuStartConversion();


	GIE_enuGloable_Interrupt_Enable();


    while (1)
    {
ADC_enuStartConversion();
ADC_enuPollingSystem();
ADC_enuReadHighValue(&ADC_Read);
DIO_enuSetPortVal(DIO_u8PORTC, ADC_Read);

    }
}
 void Read_POT(void *ptr)
{
	ADC_enuReadHighValue(ptr);

}
