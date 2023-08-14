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
void _7_SEG_Pin_Test(void)
{

        Off_7_SEG_AllPin();HAL_Delay(500);


        On_7_SEG_OnePin(GPIO_PIN_0);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_1);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_2);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_3);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_4);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_5);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_6);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_7);HAL_Delay(500);
}
void _7_SEG_Num_Test(int num)
{
  Off_7_SEG_AllPin();HAL_Delay(500);
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
