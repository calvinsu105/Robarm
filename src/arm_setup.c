/*
 * arm_setup.c
 *
 *  Created on: 2019年12月25日
 *      Author: jingo
 */
#include "robarm_arch.h"

void arm_setup (){
	Arm1pwm_pB7mode = 1;
	Arm1pwm_pB7 = 0;//joint 0
	//PORTB.PDR.BIT.B6=1
	Arm2pwm_p12mode = 1;
	Arm2pwm_p12 = 0;//joint 1

	Arm3pwm_p13mode = 1;
	Arm3pwm_p13 = 0;//joint 2

	LED_p17mode = 1;//led0
	LED_p17 = 1;//led0 reg

}

