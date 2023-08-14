/*
 * led.h
 *
 *  Created on: Nov 22, 2022
 *      Author: qkcvb
 */

#ifndef INC_LED_H_
#define INC_LED_H_
/* includes */

/* functions */
void LED_On_Red (void);
void LED_Off_Red (void);
void LED_On_Yellow (void);
void LED_Off_Yellow (void);
void LED_On_Blue (void);
void LED_Off_Blue (void);
void LED_Off_Green (void);
void LED_On_Green (void) ;
void LED_On_All (void);
void LED_Off_All (void);
void LED_OnOffAll_Mult(uint32_t count);
void LED_Test(void);



#endif /* INC_LED_H_ */
