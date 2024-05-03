/*
 * App.h
 *
 *  Created on: Mar 15, 2024
 *      Author:samar ibrahim
 */

#ifndef APP_APP_H_
#define APP_APP_H_
void APP_Init();
void NormalModeForCar(void);
void pedestrianMode(void);
void TRAFFIC_CONTROL_enuRunSystem(void);

#define LED_RED_CAR           0
#define LED_YELLOW_CAR        1
#define LED_GREEN_CAR         2
#define LED_RED_pedestrian    3
#define LED_YELLOW_pedestrian 4
#define LED_GREEN_pedestrian  5

#define PedestrianMode        66
#define NormalMode            8

#endif /* APP_APP_H_ */
