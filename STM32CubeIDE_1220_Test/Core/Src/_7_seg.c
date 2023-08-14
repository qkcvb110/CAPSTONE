/*
 * _7_seg.c
 *
 *  Created on: Dec 20, 2022
 *      Author: qkcvb
 */
#include "gpio.h"
#include "_7_seg.h"

void PowerOn_7_SEG(void)
{
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, SET);
}
void PowerOff_7_SEG(void)
{
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, RESET);
}
void On_7_SEG_AllPin(void)
{
On_7_SEG_OnePin (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3
| GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7);
}
void Off_7_SEG_AllPin(void)
{
Off_7_SEG_OnePin (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3
| GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7);
}
void On_7_SEG_OnePin(uint16_t pinNum)
{
   HAL_GPIO_WritePin(GPIOC,pinNum, RESET);
}
void Off_7_SEG_OnePin(uint16_t pinNum)
{
   HAL_GPIO_WritePin(GPIOC,pinNum, SET);
}
void _7_SEG_Num_Test(int num)
{
  PowerOn_7_SEG();
  Off_7_SEG_AllPin();
  switch(num){
        case 0:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5);HAL_Delay(500);
        break;
        case 1:
        On_7_SEG_OnePin(GPIO_PIN_1|GPIO_PIN_2);HAL_Delay(500);
        break;
        case 2:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_6|GPIO_PIN_4|GPIO_PIN_3);HAL_Delay(500);
        break;
        case 3:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_6|GPIO_PIN_2|GPIO_PIN_3);HAL_Delay(500);
        break;
        case 4:
        On_7_SEG_OnePin(GPIO_PIN_2|GPIO_PIN_1|GPIO_PIN_6|GPIO_PIN_5);HAL_Delay(500);
        break;
        case 5:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_2|GPIO_PIN_3);HAL_Delay(500);
        break;
        case 6:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_5|GPIO_PIN_4|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_6);HAL_Delay(500);
        break;
        case 7:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_5|GPIO_PIN_1|GPIO_PIN_2);HAL_Delay(500);
        break;
        case 8:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6);HAL_Delay(500);
        break;
        case 9:
        On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_5|GPIO_PIN_6);HAL_Delay(500);
        break;
  }
}
void _7_SEG_20181367_Test(uint16_t cnt)
{
	for(int i=0; i<cnt; i++)
	{
		PowerOn_7_SEG();
		Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_6|GPIO_PIN_4|GPIO_PIN_3);HAL_Delay(500);Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5);HAL_Delay(500);Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_1|GPIO_PIN_2);HAL_Delay(500);Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6);HAL_Delay(500);Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_1|GPIO_PIN_2);HAL_Delay(500);Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_6|GPIO_PIN_2|GPIO_PIN_3);HAL_Delay(500);Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_5|GPIO_PIN_4|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_6);HAL_Delay(500);Off_7_SEG_AllPin();
		On_7_SEG_OnePin(GPIO_PIN_0|GPIO_PIN_5|GPIO_PIN_1|GPIO_PIN_2);HAL_Delay(500);Off_7_SEG_AllPin();
	}
}
void _7_SEG_2018_Test(void)
{
	 int a[8] = {2,0,1,8,1,3,6,7};
	 int i=0;
	 for(i = 0; i < 8; i++)
	 {
		 _7_SEG_Num_Test(a[i]);
	 }
}
