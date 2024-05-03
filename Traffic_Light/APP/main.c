/*
 * main.c

 *
 *  Created on: Mar 15, 2024
 *      Author: samar ibrahim
 */


void main(void){

	APP_Init();

	while(1){
		 TRAFFIC_CONTROL_enuRunSystem();
	}
}
