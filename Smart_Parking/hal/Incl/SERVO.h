/*
 * SERVO.h
 *
 *  Created on: Apr 15, 2024
 *      Author: HFCS
 */

#ifndef INCL_SERVO_H_
#define INCL_SERVO_H_

#include "stm32F103C6.h"
#include "gpio.h"
#include "timer.h"

#define UP   1
#define Down 2


void Servo1_Entry_Gate_Init(void);
void Servo1_Entry_Gate(uint8_t Direction);


void Servo2_Exit_Gate_Init(void);
void Servo2_Exit_Gate(uint8_t Direction);


#endif /* INCL_SERVO_H_ */
