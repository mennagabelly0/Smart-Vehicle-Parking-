/*
 * timer.c
 *
 *  Created on: Apr 15, 2024
 *      Author: MENNA
 */

#include "timer.h"

void Timer2_init(void)
{
	RCC_APB1ENR |=(1<<0);     //Enable Rcc for tim2
	TIM2_PSC = 7;             //Clk_input=(8M/(7+1))=1MHZ
	TIM2_ARR = 0xC350;        //to make interrupt after 50000 tike(50000*10^-6)=0.05-->20*0.05=1
	TIM2_CR1 |=(1<<0);
	while(!(TIM2_SR)&(1<<0));
}

void dus(int us)
{
	TIM2_CNT=0;
	while(TIM2_CNT<us);
}

void dms(int ms)
{
	int i=0;
	for(i=0;i<ms;i++)
	{
		dus(1000);
	}
}
