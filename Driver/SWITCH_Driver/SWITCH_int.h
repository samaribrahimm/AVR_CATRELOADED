/*
 * SWITCH_int.h
 *
 *  Created on: Oct 27, 2023
 *      Author: user
 */

#ifndef SWITCH_INT_H_
#define SWITCH_INT_H_


#include"SWITCH_config.h"

ES_t SWITCH_enuInit(SW_t *Copy_AstrSwitchs);
ES_t SWITCH_enuGetStatus(SW_t *Copy_AstrSwitchs,u8 *Copy_pu8SwStatus);

#endif /* SWITCH_INT_H_ */
