/*
 * uart.c
 *
 *  Created on: Dec 17, 2022
 *      Author: qkcvb
 */
#include "usart.h"
#include <stdio.h>
#include "gpio.h"
#include "led.h"
#include "_7_seg.h"
int _write(int file, unsigned char * p, int len)
{
HAL_UART_Transmit(&huart1, p, len, 10);
return len;
}
void uart_test(void)
{
	uint8_t Test[ ] = "\r\n 20181367 \r\n";
	HAL_UART_Transmit(&huart1, Test, sizeof(Test), 10);
	HAL_Delay(500);
	printf("\r\n wonjin has 0.2 girlfriend \r\n");
}
void key_test(void)
{
	while (1)
	{
		uint8_t ch;
		printf("\r\n press your key \r\n");
		HAL_UART_Receive(&huart1, &ch, 1, 10);
		HAL_UART_Transmit(&huart1, &ch, 1, 10);
		switch(ch)
		{
		case 'a':
			LED_On_Red(); break;
		case 'b':
			_7_SEG_Num_Test(3); break;
		default:
			LED_Off_All();Off_7_SEG_AllPin(); break;
	}
	if(ch=='c')
	{
		break;
	}
	}
}
