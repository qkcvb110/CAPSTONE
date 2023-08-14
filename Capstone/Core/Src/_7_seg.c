#include "gpio.h"
#include "_7_seg.h"

void PowerOn_7_SEG_D1(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, SET);
}
void PowerOff_7_SEG_D1(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, RESET);
}
void PowerOn_7_SEG_D2(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, SET);
}
void PowerOff_7_SEG_D2(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, RESET);
}
void PowerOn_7_SEG_D3(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, SET);
}
void PowerOff_7_SEG_D3(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, RESET);
}
void PowerOn_7_SEG_D4(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, SET);
}
void PowerOff_7_SEG_D4(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, RESET);
}
void PowerOn_7_SEG_D5(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, SET);
}
void PowerOff_7_SEG_D5(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, RESET);
}
void PowerOn_7_SEG_D6(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, SET);
}
void PowerOff_7_SEG_D6(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, RESET);
}
void PowerOn_7_SEG_D7(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, SET);
}
void PowerOff_7_SEG_D7(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, RESET);
}
void PowerOn_7_SEG_D8(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, SET);
}
void PowerOff_7_SEG_D8(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, RESET);
}
void PowerOn_7_SEG_A1(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_0, SET);
}
void PowerOff_7_SEG_A1(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_0, RESET);
}
void PowerOn_7_SEG_A2(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_1, SET);
}
void PowerOff_7_SEG_A2(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_1, RESET);
}
void PowerOn_7_SEG_A3(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, SET);
}
void PowerOff_7_SEG_A3(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, RESET);
}
void PowerOn_7_SEG_A4(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, SET);
}
void PowerOff_7_SEG_A4(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, RESET);
}
void PowerOn_7_SEG_A5(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_4, SET);
}
void PowerOff_7_SEG_A5(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_4, RESET);
}
void PowerOn_7_SEG_A6(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, SET);
}
void PowerOff_7_SEG_A6(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, RESET);
}
void PowerOn_7_SEG_A7(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_6, SET);
}
void PowerOff_7_SEG_A7(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_6, RESET);
}
void PowerOn_7_SEG_A8(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_7, SET);
}
void PowerOff_7_SEG_A8(void)
{
   HAL_GPIO_WritePin(GPIOE, GPIO_PIN_7, RESET);
}
void PowerOff_All(void)
{
	PowerOff_7_SEG_A1();
	PowerOff_7_SEG_A2();
	PowerOff_7_SEG_A3();
	PowerOff_7_SEG_A4();
	PowerOff_7_SEG_A5();
	PowerOff_7_SEG_A6();
	PowerOff_7_SEG_A7();
	PowerOff_7_SEG_A8();
	PowerOff_7_SEG_D1();
	PowerOff_7_SEG_D2();
	PowerOff_7_SEG_D3();
	PowerOff_7_SEG_D4();
	PowerOff_7_SEG_D5();
	PowerOff_7_SEG_D6();
	PowerOff_7_SEG_D7();
	PowerOff_7_SEG_D8();
}
void Dot_left(void)
{
	for(int i=0; i<50; i++)
	{
		PowerOn_7_SEG_D1();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();


		  PowerOn_7_SEG_D6();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A8();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_D4();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A1();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A7();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A2();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A5();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();
	}
	HAL_Delay(500);
}

void Dot_right(void)
{
	for(int i=0; i<50; i++)
	{
		  PowerOn_7_SEG_D1();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();


		  PowerOn_7_SEG_D6();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A8();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_D4();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A1();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A7();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A2();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A5();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();
	}
	HAL_Delay(500);
}


void Dot_bisang(void)
{
	for(int i=0; i<50; i++)
	{
		  PowerOn_7_SEG_D1();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();


		  PowerOn_7_SEG_D6();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A8();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_D4();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A1();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A7();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_D2();
		  PowerOn_7_SEG_A6();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A2();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();

		  PowerOn_7_SEG_A5();
		  PowerOn_7_SEG_D5();
		  PowerOn_7_SEG_A3();
		  PowerOn_7_SEG_A4();
		  PowerOn_7_SEG_D3();
		  PowerOn_7_SEG_D7();
		  PowerOn_7_SEG_D8();
		  HAL_Delay(0);
		  PowerOff_All();
	}
	HAL_Delay(500);
}
void PowerOn_7_SEG_L1(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);
}
void PowerOff_7_SEG_L1(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
}
void PowerOn_7_SEG_L2(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);
}
void PowerOff_7_SEG_L2(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
}
void PowerOn_7_SEG_L3(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);
}
void PowerOff_7_SEG_L3(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
}
void PowerOn_7_SEG_L4(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);
}
void PowerOff_7_SEG_L4(void)
{
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
}

void On_7_SEG_AllPin(void)
{
On_7_SEG_OnePin (GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12);
}
void Off_7_SEG_AllPin(void)
{
Off_7_SEG_OnePin (GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9
| GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12);
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


        On_7_SEG_OnePin(GPIO_PIN_6);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_7);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_8);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_9);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_10);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_11);HAL_Delay(500);
        On_7_SEG_OnePin(GPIO_PIN_12);HAL_Delay(500);

}
void _7_SEG_Num_Test(char num)
{
  Off_7_SEG_AllPin();
  switch(num){
        case 0x30:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11);
        break;
        case 0x31:
        On_7_SEG_OnePin(GPIO_PIN_7|GPIO_PIN_8);
        break;
        case 0x32:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_12|GPIO_PIN_10|GPIO_PIN_9);
        break;
        case 0x33:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_12|GPIO_PIN_8|GPIO_PIN_9);
        break;
        case 0x34:
        On_7_SEG_OnePin(GPIO_PIN_8|GPIO_PIN_7|GPIO_PIN_12|GPIO_PIN_11);
        break;
        case 0x35:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_8|GPIO_PIN_9);
        break;
        case 0x36:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_11|GPIO_PIN_10|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_12);
        break;
        case 0x37:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_11|GPIO_PIN_7|GPIO_PIN_8);
        break;
        case 0x38:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12);
        break;
        case 0x39:
        On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_12|GPIO_PIN_11);
        break;
}
}
void _7_SEG_Num_Test2(int num)
{
  Off_7_SEG_AllPin();
  switch(num){
  case 0:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11);
          break;
          case 1:
          On_7_SEG_OnePin(GPIO_PIN_7|GPIO_PIN_8);
          break;
          case 2:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_12|GPIO_PIN_10|GPIO_PIN_9);
          break;
          case 3:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_12|GPIO_PIN_8|GPIO_PIN_9);
          break;
          case 4:
          On_7_SEG_OnePin(GPIO_PIN_8|GPIO_PIN_7|GPIO_PIN_12|GPIO_PIN_11);
          break;
          case 5:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_8|GPIO_PIN_9);
          break;
          case 6:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_11|GPIO_PIN_10|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_12);
          break;
          case 7:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_11|GPIO_PIN_7|GPIO_PIN_8);
          break;
          case 8:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12);
          break;
          case 9:
          On_7_SEG_OnePin(GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11);
          break;
}
}


void _7_SEG_1234_Test(void)
{
	PowerOn_7_SEG_D1();
	_7_SEG_Num_Test2(1);
	HAL_Delay(0);
	PowerOff_7_SEG_D1();
	PowerOn_7_SEG_D2();
	_7_SEG_Num_Test2(2);
	HAL_Delay(0);
	PowerOff_7_SEG_D2();
	PowerOn_7_SEG_D3();
	_7_SEG_Num_Test2(3);
	HAL_Delay(0);
	PowerOff_7_SEG_D3();
	PowerOn_7_SEG_D4();
	_7_SEG_Num_Test2(4);
	HAL_Delay(0);
	PowerOff_7_SEG_D4();
}
