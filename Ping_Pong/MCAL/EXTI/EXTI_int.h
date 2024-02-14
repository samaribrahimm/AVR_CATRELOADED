/*
 * EXTI_int.h
 *
 *  Created on: Feb 5, 2024
 *      Author: samar ibrahim
 */

#ifndef EXTI_INT_H_
#define EXTI_INT_H_

ES_t EXTI_enuInit (EXTI_t * Copy_pstrEXTIConfig);

ES_t EXTI_enuSetSenseLevel(u8 Copy_u8EXTI_ID , u8 Copy_u8SenseLevel);

ES_t EXTI_enuEnableINT(u8 Copy_u8EXTI_ID);

ES_t EXTI_enuDisableINT(u8 Copy_u8EXTI_ID);

ES_t EXTI_enuCallBack(volatile void (*Copy_pfunAppFun)(void*) , volatile void * Copy_pvidParameter , u8 Copy_u8EXTI_ID);

#endif /* EXTI_INT_H_ */
