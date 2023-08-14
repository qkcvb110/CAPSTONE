/*
 * ExtINT.c
 *
 *  Created on: Dec 16, 2022
 *      Author: qkcvb
 */
#include "gpio.h"
#include "usart.h"
#include "ExtINT.h"
#include "_7_seg.h"
#include <stdio.h>
uint8_t flag = 0;
uint8_t i=0;
void ExtINT_test(void)
{
while(1){

	PowerOn_7_SEG();
	  Off_7_SEG_AllPin();HAL_Delay(500);

	if(flag == 1)
	{
		i++;
		HAL_Delay(50);
		_7_SEG_Num_Test(i);
		flag = 0;


	}

}
}
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
/* Prevent unused argument(s) compilation warning */
flag = 1;
/* NOTE: This function Should not be modified,
when the callback is needed, the HAL_GPIO_EXTI_Callback
could be implemented in the user file
*/
}
