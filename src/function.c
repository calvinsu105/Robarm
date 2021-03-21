/*
 * function.c
 *
 *  Created on: 2020年1月3日
 *      Author: Lin Chen
 */
#include "robarm_arch.h"

void Arm_LED_Set_P12_P17 (void) //set to input mode //
{

	P14_mod = 0;
	P15_mod = 0;
	P16_mod = 0;
}

void Control_Pin_Set_P72_P73(void)//set to input mode//
{
	P72_mod = 0;
	P73_mod = 0;
	P74_mod = 1;
	P75_mod = 1;
}

void Power_Indicate_Pin_Set_P42_P47(void)
{
	P42_mod = 1; //PDR=1
	P43_mod = 1;
	P44_mod = 1;
	P45_mod = 1;
	P46_mod = 1;
	P47_mod = 1;

}

void Initial(void)
{
	Power_Indicate_Pin_Set_P42_P47();
	Control_Pin_Set_P72_P73();
	Arm_LED_Set_P12_P17();
	PowerADD=0;
	PowerSUB=0;
}

int Joint_Select(void)
{
	int TargetArm = 3;

	if(Arm3 ==1)
	{
		TargetArm=0;
	}
	else if(Arm4 ==1)
	{
		TargetArm=1;
	}
	else if(Arm5 ==1)
	{
		TargetArm=2;
	}

	return TargetArm;
}

int Power_Control(int power,int key)
{
	if(PowerADD == 1 && key >1000 )
	{
		power ++;
		PowerADD_Indicate = 1;

	}
	if (PowerSUB == 1 && key >1000)
	{
		power --;
		PowerSUB_Indicate = 1;
	}
	return power;
}

int Power_Limitation(int power)
{
	if(power >= 63800 )
	{
		power = 63800;
	}
	else if (power <= 62500 )
	{
		power = 62500;
	}
	return power;
}

void PWM_Duty_Set(int *duty,int joint, int power)
{
	duty[joint]=power;

}


void Power_Indicator(int power)
{
	if( power< 62680&& power>= 62500 )
	{
		LOW = 1;
		LV1 = 0;
		LV2 = 0;
		LV3 = 0;
		LV4 = 0;
		MAX = 0;
	}
	else if(power<62860 && power>=62680)
	{
		LOW = 1;
		LV1 = 1;
		LV2 = 0;
		LV3 = 0;
		LV4 = 0;
		MAX = 0;

	}
	else if(power< 63040 && power>= 62860)
	{
		LOW = 1;
		LV1 = 1;
		LV2 = 1;
		LV3 = 0;
		LV4 = 0;
		MAX = 0;

	}
	else if(power< 63220 && power>= 63040)
	{
		LOW = 1;
		LV1 = 1;
		LV2 = 1;
		LV3 = 1;
		LV4 = 0;
		MAX = 0;

	}
	else if(power<63400 && power>=63220)
	{
		LOW = 1;
		LV1 = 1;
		LV2 = 1;
		LV3 = 1;
		LV4 = 1;
		MAX = 0;

	}
	else if(power<=63580 && power>= 63400)
	{
		LOW = 1;
		LV1 = 1;
		LV2 = 1;
		LV3 = 1;
		LV4 = 1;
		MAX = 1;
	}
	else if (power<=63800 && power>= 63580)
	{//power 55000-57000
		LOW = 0;
		LV1 = 1;
		LV2 = 1;
		LV3 = 1;
		LV4 = 1;
		MAX = 1;
	}
}
void Delay(int wait)
{
	int i;
	for(i=0;i<wait;i++);
}
