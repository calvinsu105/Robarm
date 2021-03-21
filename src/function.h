/*
 * function.h
 *
 *  Created on: 2020年1月2日
 *      Author: Lin Chen
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_




extern void Arm_LED_Set_P12_P17 (void); //set to input mode //

extern void Control_Pin_Set_P72_P73(void);//set to input mode//


extern void Power_Indicate_Pin_Set_P42_P47(void);

extern void Power_Indicator(int power);

extern int Joint_Select(void);

extern int Power_Control(int power,int key);

extern int Power_Limitation(int power);

extern void PWM_Duty_Set(int *duty,int joint, int power);

extern void Initial(void);


extern void Delay(int wait);


#endif /* FUNCTION_H_ */
