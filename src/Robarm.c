/***************************************************************/
/*                                                             */
/*      PROJECT NAME :  Robarm                                 */
/*      FILE         :  Robarm.c                               */
/*      DESCRIPTION  :  Main Program                           */
/*      CPU SERIES   :  RX200                                  */
/*      CPU TYPE     :  RX231                                  */
/*                                                             */
/*      This file is generated by e2 studio.                   */
/*                                                             */
/***************************************************************/                              
                                                                           
                                                                           
                                                                           
                                                                          
/***********************************************************************/
/*                                                                     */
/*  FILE        :Main.c or Main.cpp                                    */
/*  DATE        :Tue, Oct 31, 2006                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :                                                      */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

#include "robarm_arch.h"

void main(void)
{

	int temp[4]={0};
	int *duty=temp;
	int joint=3;
	int flag[3]={0};
	arm_setup();
	timer_setup(63900,0);//57340
	Initial();
	int power=62400;
	PORT5.PDR.BIT.B0 = 1;
	int key = 0;

	//PORTE.PDR.BIT.B4=1;

	while(1)
	{
		joint=3;
		key ++;
		if(key >= 1200)
		{
			key=0;
		}
		PowerADD_Indicate=0;
		PowerSUB_Indicate=0;
		joint = Joint_Select(); // selected the joint 1-6 //
		if(joint==0)
		{
			flag[0]=1;
			flag[1]=0;
			flag[2]=0;
		}
		else if(joint==1)
		{
			flag[0]=0;
			flag[1]=1;
			flag[2]=0;
		}
		else if(joint==2)
		{
			flag[0]=0;
			flag[1]=0;
			flag[2]=1;
		}
		else if(joint==3)
		{
			flag[0]=0;
			flag[1]=0;
			flag[2]=0;
		}
		power=Power_Control(power,key);
		power=Power_Limitation(power);//power limitation//
		Power_Indicator(power);//Power indicator//
		PWM_Duty_Set(duty,joint,power);
		pwmcontrol(duty,&flag);
	}
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
