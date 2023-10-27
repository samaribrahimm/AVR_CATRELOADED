/*
 * SWITCH_config.h
 *
 *  Created on: Oct 26, 2023
 *      Author: user
 */

#ifndef SWITCH_CONFIG_H_
#define SWITCH_CONFIG_H_

#include "stdTypes.h"

#define SW_NUM  3

typedef struct {
	u8 SW_PortID ;
	u8 SW_PinID;
	u8 SW_Status;
}SW_t;

#endif /* SWITCH_CONFIG_H_ */
