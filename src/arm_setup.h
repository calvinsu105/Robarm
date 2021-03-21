/*
 * arm_setup.h
 *
 *  Created on: 2019年12月25日
 *      Author: jingo
 */

#ifndef ARM_SETUP_H_
#define ARM_SETUP_H_

//pin mode
#define Arm1pwm_pB7mode PORTB.PDR.BIT.B7
#define Arm2pwm_p12mode PORT1.PDR.BIT.B2
#define Arm3pwm_p13mode PORTB.PDR.BIT.B4

#define LED_p17mode PORT1.PDR.BIT.B7


//pin reg

#define Arm1pwm_pB7 PORTB.PODR.BIT.B7
#define Arm2pwm_p12 PORT1.PODR.BIT.B2
#define Arm3pwm_p13 PORTB.PODR.BIT.B4

#define LED_p17 PORT1.PODR.BIT.B7

extern void arm_setup ();

#endif /* ARM_SETUP_H_ */
