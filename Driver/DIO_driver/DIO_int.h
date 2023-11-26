/*
 * DIO_int.h
 *
 *  Created on: Oct 12, 2023
 *      Author: samar ibrahim
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_

ES_t DIO_enuInit(void);

ES_t DIO_enuSetPortDirection(u8 Copy_u8PortID, u8 Copy_u8Value);
ES_t DIO_enuSetPortVal(u8 Copy_u8PortID, u8 Copy_u8Value);
ES_t DIO_enuGetPortVal(u8 Copy_u8PortID, u8 *Copy_pu8Value);
ES_t DIO_enuTogPortVal(u8 Copy_u8PortID);


ES_t DIO_enuSetPinDirection(u8 Copy_u8PortID,u8 Copy_u8PinID, u8  Copy_u8Value);
ES_t DIO_enuSetPinVal(u8 Copy_u8PortID,u8 Copy_u8PinID, u8 Copy_u8Value);
ES_t DIO_enuGetPinVal(u8 Copy_u8PortID, u8 Copy_u8PinID,u8 *Copy_pu8Value);
ES_t DIO_enuTogPinVal(u8 Copy_u8PortID,u8 Copy_u8PinID);

#endif /* DIO_INT_H_ */
