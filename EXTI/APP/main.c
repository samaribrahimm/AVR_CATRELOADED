/*
 * main.c
 *
 *  Created on: Feb 5, 2024
 *      Author: user
 */

#include "../LIB/errorStates.h"
#include "../LIB/stdTypes.h"

#include "../MCAL/DIO/DIO_config.h"
#include "../MCAL/DIO/DIO_int.h"

#include "../MCAL/EXTI/EXTI_config.h"
#include "../MCAL/EXTI/EXTI_int.h"

#include "../MCAL/GIE/GIE_int.h"

#include <util/delay.h>

extern EXTI_t EXTI_AstrEXTIConfig[3];

volatile void Toggle_Led(void *ptr);

int main(void)
{

	DIO_enuSetPinDirection(DIO_u8PORTD, DIO_u8PIN2, DIO_u8INPUT);
	DIO_enuSetPinVal(DIO_u8PORTD, DIO_u8PIN2, DIO_u8PULLUP);
	DIO_enuSetPinDirection(DIO_u8PORTB, DIO_u8PIN0, DIO_u8OUTPUT);



	EXTI_enuInit(EXTI_AstrEXTIConfig);

	u8 X= 0;

	 EXTI_enuCallBack(&Toggle_Led, &X, 0);

	/* Enable INT0 */
	EXTI_enuEnableINT(INT0);

	/* enable global interrupt */
	GIE_enuGloable_Interrupt_Enable();

	DIO_enuSetPinVal(DIO_u8PORTB,DIO_u8PIN0, DIO_u8LOW);

    /* Replace with your application code */
    while (1)
    {
    }
}

volatile void Toggle_Led(void *ptr)
{

	DIO_enuTogPinVal(DIO_u8PORTB,DIO_u8PIN0);
}
