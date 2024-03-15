/*
 * TIMER_init.h
 *
 *  Created on: Feb 29, 2024
 *      Author: samar ibrahim
 */

#ifndef MCAL_TIMER_TIMER_INIT_H_
#define MCAL_TIMER_TIMER_INIT_H_

ES_t TIMER0_enuInit(void);
ES_t TIMER0_enuDisable(u8 Copy_u8TimerId);
ES_t TIMER0_enuSetPreload(u8 Copy_u8Preload);
ES_t TIMER0_enuSetAsyncDelay(u32 Copy_u32Time_ms,void (*Copy_pfunAppFun)(void*),void * Copy_pvidParameter); //interrupt
ES_t TIMER0_enuSetsyncDelay(u32 Copy_u32Time_ms); //polling



/*ES_t TIMER0_enuSetOutputCompareRegister(u8 Copy_u8OCRValue);

ES_t TIMER0_enuSetCALLBACK_CTC(void (*Copy_PFunApp)(void *), void *Copy_PParameterApp);

ES_t TIMER0_enuGeneratePWM(u8 Copy_u8DutyCycle);

ES_t TIMER0_enuEnableOVFInterrupt(void);

ES_t TIMER0_enuEnableCTCInterrupt(void);*/


#endif /* MCAL_TIMER_TIMER_INIT_H_ */
