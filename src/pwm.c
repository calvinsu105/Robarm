#include "robarm_arch.h"
int count=0;

void timer_setup(int trig,int pre)
{
	SYSTEM.PRCR.WORD=0xA50B;
	MSTP(MTU)=0;

	//	MTU0.TMDR.BIT.MD=2;
	MTU0.TCR.BIT.CKEG = 1;
	MTU0.TCR.BIT.TPSC = pre;
	MTU0.TCR.BIT.CCLR = 1;
	MTU.TSTR.BIT.CST0=1;
	MTU0.TGRA=trig;

}
int shift_count()
{
	if(MTU0.TCNT < 100){
		count++;
		while(MTU0.TCNT < 100 ){}
			}

	return count/100;

}
void pwmcontrol(int *duty,int *flag){

		if(MTU0.TCNT<=duty[0]&&flag[0]==1)
		{
			Arm1pwm_pB7 = 0;
			//PORTB.PODR.BIT.B6=0;
			LED_p17 = 0;
		}
		else
		{
			Arm1pwm_pB7 = 1;
			PORTB.PODR.BIT.B6=1;
			LED_p17 = 1;
		}


		if(MTU0.TCNT<=duty[1]&&flag[1]==1)
		{
			Arm2pwm_p12 = 0;
			LED_p17 = 0;
		}
		else
		{
			Arm2pwm_p12 = 1;
			LED_p17 = 1;
		}

		if(MTU0.TCNT<=duty[2]&&flag[2]==1)
		{
			Arm3pwm_p13 = 0;
			LED_p17 = 0;
		}
		else
		{
			Arm3pwm_p13 = 1;
			LED_p17 = 1;
		}
}
