/*
 * uart.c
 *
 *  Created on: Dec 20, 2022
 *      Author: qkcvb
 */
#include <stdio.h>
#include "usart.h"
#include "uart.h"
int _write(int file, unsigned char * p, int len)
{
HAL_UART_Transmit(&huart1, p, len, 10);
return len;
}

void uart_test(void)
{
	uint8_t Test[ ] = "\r\n20181367\r\n";
	HAL_UART_Transmit(&huart1, Test, sizeof(Test), 10);
	printf("\r\nwonjin has 0.2 girlfriend \r\n");
	HAL_Delay(1000);
}
