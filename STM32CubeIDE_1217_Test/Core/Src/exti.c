/*
 * exti.c
 *
 *  Created on: Dec 17, 2022
 *      Author: qkcvb
 */


/*
 * exti.c
 *
 *  Created on: Dec 16, 2022
 *      Author: sc110
 */


#include "gpio.h"
#include "exti.h"
#include "usart.h"
#include "_7_seg.h"
#include <stdio.h>

int i=0;
GPIO_PinState flag_sw1 =0;
GPIO_PinState flag_sw2 =0;
void exti_test(void)
{
	PowerOn_7_SEG();
	Off_7_SEG_AllPin();
   while(1)
   {
	   if(flag_sw1==1)
	   {

		   i=i+2;
		   HAL_Delay(50);
		   printf("\r\n%d\r\n", i );
		   HAL_Delay(50);
		   _7_SEG_Num_Test(i);
		   Off_7_SEG_AllPin();
      	  flag_sw1 =0;
	   }
	   if(flag_sw2==1)
	   {
		   break;
		   i=i-2;
		   HAL_Delay(50);
		   printf("\r\n%d\r\n", i );
		   HAL_Delay(50);
		   _7_SEG_Num_Test(i);
		   Off_7_SEG_AllPin();
           flag_sw2 =0;
       }
   }



}
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
/* Prevent unused argument(s) compilation warning */
   if(GPIO_Pin == GPIO_PIN_0){
        flag_sw1 = 1;
     }else if(GPIO_Pin == GPIO_PIN_1){
        flag_sw2 = 1;
     }
/* NOTE: This function Should not be modified,
when the callback is needed, the HAL_GPIO_EXTI_Callback
could be implemented in the user file
*/
}
