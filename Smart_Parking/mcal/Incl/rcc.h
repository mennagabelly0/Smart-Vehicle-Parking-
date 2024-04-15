/*
 * rcc.h
 *
 *  Created on: Apr 15, 2024
 *      Author: MENNA
 */

#ifndef INCL_RCC_H_
#define INCL_RCC_H_

#include "stm32F103C6.h"
#include "gpio.h"

#define HSI_RC_CLK 8000000


uint32_t MCAL_RCC_Get_SYS_CLKFreq(void);
uint32_t MCAL_RCC_Get_HCLK_Freq(void);
uint32_t MCAL_RCC_Get_PCLK1_Freq(void);
uint32_t MCAL_RCC_Get_PCLK2_Freq(void);



#endif /* INCL_RCC_H_ */
