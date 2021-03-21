/*
 * pwm.h
 *
 *  Created on: 2019年12月24日
 *      Author: jingo
 */

#ifndef PWM_H_
#define PWM_H_
extern void pwmcontrol(int *duty,int *flag);
extern void timer_setup(int trig,int pre);
extern int shift_count();

#endif /* PWM_H_ */
