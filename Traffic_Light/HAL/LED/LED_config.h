/*
 * LED_config.h
 *
 *  Created on: Oct 27, 2023
 *      Author: user
 */

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

#define LED_NUM  6
typedef struct{

	    u8 LED_u8PortID ;
		u8 LED_u8PinID;
		u8 LED_u8Connection;
		u8 LED_u8Status;
}LED_t;


#endif /* LED_CONFIG_H_ */
