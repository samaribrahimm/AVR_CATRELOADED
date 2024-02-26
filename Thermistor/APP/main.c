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

#include "../HAL/Thermistor/Thermistor_config.h"
#include "../HAL/Thermistor/Thermistor_int.h"



#include <util/delay.h>

#include <util/delay.h>

extern  Themistor_t LM35_AstrEXTIConfig [LM35NUM];

int main(void)
{
	LCD_enuInit();

	u32 x = 0;
	Thermistor_enuInit(LM35_AstrEXTIConfig );

    /* Replace with your application code */
    while (1)
    {
    	Themistor_enuGetTemp(0,&x);
		LCD_enuDisplayNum(x);
		_delay_ms(1000);
    }
}
