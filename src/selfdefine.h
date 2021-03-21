/*
 * selfdefine.h
 *
 *  Created on: 2020年1月2日
 *      Author: Lin Chen
 */

#ifndef SELFDEFINE_H_
#define SELFDEFINE_H_
//Pin 12-17 = Arm Select LED PIN
//arm select


#define P14_mod PORT1.PDR.BIT.B4
#define P15_mod PORT1.PDR.BIT.B5
#define P16_mod PORT1.PDR.BIT.B6



#define Arm3 PORT1.PIDR.BIT.B4
#define Arm4 PORT1.PIDR.BIT.B5
#define Arm5 PORT1.PIDR.BIT.B6


//power indicate
#define P42_mod PORT4.PDR.BIT.B2
#define P43_mod PORT4.PDR.BIT.B3
#define P44_mod PORT4.PDR.BIT.B4
#define P45_mod PORT4.PDR.BIT.B5
#define P46_mod PORT4.PDR.BIT.B6
#define P47_mod PORT4.PDR.BIT.B7

#define LOW PORT4.PODR.BIT.B2
#define LV1 PORT4.PODR.BIT.B3
#define LV2 PORT4.PODR.BIT.B4
#define LV3 PORT4.PODR.BIT.B5
#define LV4 PORT4.PODR.BIT.B6
#define MAX PORT4.PODR.BIT.B7

//control pin
#define P72_mod PORTC.PDR.BIT.B6
#define P73_mod PORTC.PDR.BIT.B7

#define PowerADD PORTC.PIDR.BIT.B6
#define PowerSUB PORTC.PIDR.BIT.B7

//Function pin//
#define P74_mod PORTE.PDR.BIT.B4
#define P75_mod PORTE.PDR.BIT.B5
#define P76_mod PORTE.PDR.BIT.B6
#define P77_mod PORTE.PDR.BIT.B7

#define PowerADD_Indicate PORTE.PODR.BIT.B4
#define PowerSUB_Indicate PORTE.PODR.BIT.B5
#define P76_data PORTE.PIDR.BIT.B6
#define P77_data PORTE.PIDR.BIT.B7


#endif /* SELFDEFINE_H_ */
