#include "gpio.h"
#include "led.h"
void LED_On_Red (void) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
}
void LED_Off_Red (void) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
}
void LED_On_Yellow (void) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
}
void LED_Off_Yellow (void) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
}
void LED_On_Blue (void) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
}
void LED_Off_Blue (void) {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
}
  void LED_On_Green (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, RESET);
}
void LED_Off_Green (void) {
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, SET);
}
void LED_On_All (void) {
LED_On_Red(); LED_On_Yellow(); LED_On_Blue(); LED_On_Green();
}
void LED_Off_All (void) {
LED_Off_Red(); LED_Off_Yellow(); LED_Off_Blue(); LED_Off_Green();
}
void LED_Test(uint16_t cnt)
{
	LED_Off_All ();HAL_Delay(500);
for(int i=0; i<cnt; i++)
{
LED_On_Yellow(); HAL_Delay(500);
LED_Off_Yellow (); HAL_Delay(500);
LED_On_Red(); HAL_Delay(500);
LED_Off_Red(); HAL_Delay(500);
LED_On_Blue(); HAL_Delay(500);
LED_Off_Blue(); HAL_Delay(500);
LED_On_Green(); HAL_Delay(500);
LED_Off_Green(); HAL_Delay(500);
}
}
