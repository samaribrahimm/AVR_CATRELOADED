/*
 * Ping_Pong.h
 *
 *  Created on: Feb 11, 2024
 *      Author: samar ibrahim
 */

#ifndef APP_PING_PONG_H_
#define APP_PING_PONG_H_

volatile void Racket1(void* ptr);
volatile void Racket2(void* ptr);
void Ping_PongInit();
void Move_ball_Left(void);
void Move_ball_Right (void);
void Check_Winner();
#endif /* APP_PING_PONG_H_ */
