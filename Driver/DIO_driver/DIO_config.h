/*
 * DIO_config.h
 *
 *  Created on: Oct 12, 2023
 *      Author: samar ibrahim
 */
#include"DIO_priv.h"
#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_



// names of ports
#define DIO_u8PORTA		0
#define DIO_u8PORTB		1
#define DIO_u8PORTC		2
#define DIO_u8PORTD		3

// pins

#define DIO_u8PIN0		0
#define DIO_u8PIN1		1
#define DIO_u8PIN2		2
#define DIO_u8PIN3		3
#define DIO_u8PIN4		4
#define DIO_u8PIN5		5
#define DIO_u8PIN6		6
#define DIO_u8PIN7		7

//Directions
#define PA_PIN0_DIR OUTPUT
#define PA_PIN1_DIR INPUT
#define PA_PIN2_DIR OUTPUT
#define PA_PIN3_DIR OUTPUT
#define PA_PIN4_DIR INPUT
#define PA_PIN5_DIR INPUT
#define PA_PIN6_DIR OUTPUT
#define PA_PIN7_DIR OUTPUT

#define PB_PIN0_DIR OUTPUT
#define PB_PIN1_DIR INPUT
#define PB_PIN2_DIR OUTPUT
#define PB_PIN3_DIR OUTPUT
#define PB_PIN4_DIR INPUT
#define PB_PIN5_DIR INPUT
#define PB_PIN6_DIR OUTPUT
#define PB_PIN7_DIR OUTPUT

#define PC_PIN0_DIR OUTPUT
#define PC_PIN1_DIR INPUT
#define PC_PIN2_DIR OUTPUT
#define PC_PIN3_DIR OUTPUT
#define PC_PIN4_DIR INPUT
#define PC_PIN5_DIR INPUT
#define PC_PIN6_DIR OUTPUT
#define PC_PIN7_DIR OUTPUT

#define PD_PIN0_DIR OUTPUT
#define PD_PIN1_DIR INPUT
#define PD_PIN2_DIR OUTPUT
#define PD_PIN3_DIR OUTPUT
#define PD_PIN4_DIR INPUT
#define PD_PIN5_DIR INPUT
#define PD_PIN6_DIR OUTPUT
#define PD_PIN7_DIR OUTPUT


//States
#define PA_PIN0_VAL HIGH
#define PA_PIN1_VAL LOW
#define PA_PIN2_VAL LOW
#define PA_PIN3_VAL PULLUP
#define PA_PIN4_VAL FLOAT
#define PA_PIN5_VAL PULLUP
#define PA_PIN6_VAL FLOAT
#define PA_PIN7_VAL LOW

#define PB_PIN0_VAL HIGH
#define PB_PIN1_VAL LOW
#define PB_PIN2_VAL LOW
#define PB_PIN3_VAL PULLUP
#define PB_PIN4_VAL LOW
#define PB_PIN5_VAL FLOAT
#define PB_PIN6_VAL LOW
#define PB_PIN7_VAL PULLUP

#define PC_PIN0_VAL HIGH
#define PC_PIN1_VAL LOW
#define PC_PIN2_VAL LOW
#define PC_PIN3_VAL PULLUP
#define PC_PIN4_VAL FLOAT
#define PC_PIN5_VAL PULLUP
#define PC_PIN6_VAL FLOAT
#define PC_PIN7_VAL LOW

#define PD_PIN0_VAL HIGH
#define PD_PIN1_VAL LOW
#define PD_PIN2_VAL LOW
#define PD_PIN3_VAL PULLUP
#define PD_PIN4_VAL FLOAT
#define PD_PIN5_VAL PULLUP
#define PD_PIN6_VAL FLOAT
#define PD_PIN7_VAL LOW





#endif /* DIO_CONFIG_H_ */
