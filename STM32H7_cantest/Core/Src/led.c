#include "main.h"
#include "led.h"
void LED_On_Red (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_10, RESET);
}
void LED_Off_Red (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_10, SET);
}
void LED_On_Yellow (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, RESET);
}
void LED_Off_Yellow (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, SET);
}
void LED_On_Blue (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, RESET);
}
void LED_Off_Blue (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, SET);
}

void LED_On_All (void) {
LED_On_Red(); LED_On_Yellow(); LED_On_Blue();
}
void LED_Off_All (void) {
LED_Off_Red(); LED_Off_Yellow(); LED_Off_Blue();
}
void LED_Test(void)
{
LED_On_Yellow(); HAL_Delay(500);
LED_Off_Yellow (); HAL_Delay(500);
LED_On_Red(); HAL_Delay(500);
LED_Off_Red(); HAL_Delay(500);
LED_On_Blue(); HAL_Delay(500);
LED_Off_Blue(); HAL_Delay(500);
}
