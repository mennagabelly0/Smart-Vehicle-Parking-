/*
 * KEYPAD.h
 *
 *  Created on: Apr 15, 2024
 *      Author: MENNA
 */

#ifndef INCL_KEYPAD_H_
#define INCL_KEYPAD_H_

#include "stm32F103C6.h"
#include "gpio.h"


void keypad_Init();
char keypad_Read(void);


#endif /* INCL_KEYPAD_H_ */
