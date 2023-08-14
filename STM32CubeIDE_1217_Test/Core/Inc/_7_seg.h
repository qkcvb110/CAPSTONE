/*
 * _7_seg.h
 *
 *  Created on: Dec 15, 2022
 *      Author: qkcvb
 */

#ifndef INC__7_SEG_H_
#define INC__7_SEG_H_
void PowerOn_7_SEG(void);
void PowerOff_7_SEG(void);
void On_7_SEG_AllPin(void);
void Off_7_SEG_AllPin(void);
void On_7_SEG_OnePin(uint16_t pinNum);
void Off_7_SEG_OnePin(uint16_t pinNum);
void _7_SEG_Pin_Test(void);
void _7_SEG_Num_Test(int num);
void _7_SEG_20181367_Test(uint16_t cnt);


#endif /* INC__7_SEG_H_ */
