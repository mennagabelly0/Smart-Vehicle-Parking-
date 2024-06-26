/*
 * stm32F103C6.h
 *
 *  Created on: Apr 15, 2024
 *      Author: HFCS
 */

#ifndef INCL_STM32F103C6_H_
#define INCL_STM32F103C6_H_
//-----------------------------
//Includes
//-----------------------------

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

//-----------------------------
//Base addresses for Memories
//-----------------------------

#define FLASH_MEMOY_BASE                          0x08000000
#define SYSTEM_MEMORY_BASE                        0x1FFFF000
#define SRAM_MEMORY_BASE                          0x20000000
#define PERIPHERALS_BASE                          0x20000000
#define CORTEX_M3_INTERNAL_PERIPHERALS_BASE       0xE0000000


//NVIC register map
#define NVIC_BASE								((uint32_t)0xE000E100)

#define NVIC_ISER0								*(volatile uint32_t *)(NVIC_BASE + 0x00)
#define NVIC_ISER1								*(volatile uint32_t *)(NVIC_BASE + 0x04)
#define NVIC_ISER2								*(volatile uint32_t *)(NVIC_BASE + 0x08)
#define NVIC_ICER0								*(volatile uint32_t *)(NVIC_BASE + 0x80)
#define NVIC_ICER1								*(volatile uint32_t *)(NVIC_BASE + 0x84)
#define NVIC_ICER2								*(volatile uint32_t *)(NVIC_BASE + 0x88)



//-----------------------------
//Base addresses for AHB Peripherals
//-----------------------------
#define RCC_BASE                                  0x40021000

//-----------------------------
//Base addresses for APB1 Peripherals
//-----------------------------

//USART2
#define USART2_BASE                              0x40004400

//USART3
#define USART3_BASE                              0x40004800

//SPI2
#define SPI2_BASE                                0x40003800

//I2C
#define I2C1_BASE                                0X40005400
#define I2C2_BASE                                0X40005800


//-----------------------------
//Base addresses for APB2 Peripherals
//-----------------------------

//GPIO
#define GPIOA_BASE                               0x40010800
#define GPIOB_BASE                               0x40010C00
#define GPIOC_BASE                               0x40011000
#define GPIOD_BASE                               0x40011400
#define GPIOE_BASE                               0x40011800

//EXIT
#define EXTI_BASE                                0x40010400

//AFIO
#define AFIO_BASE                                0x40010000

//NVIC
#define NVIC_BASE                                0xE000E100

//USART1
#define USART1_BASE                              0x40013800

//SPI1
#define SPI1_BASE                                0X40013000


//NVIC REGISTERS MAP
#define NVIC_ISER0                              *( volatile uint32_t *)(NVIC_BASE+0x0000)
#define NVIC_ISER1                              *( volatile uint32_t *)(NVIC_BASE+0x0004)
#define NVIC_ISER2                              *( volatile uint32_t *)(NVIC_BASE+0x0008)
#define NVIC_ICER0                              *( volatile uint32_t *)(NVIC_BASE+0x0080)
#define NVIC_ICER1                              *( volatile uint32_t *)(NVIC_BASE+0x0084)
#define NVIC_ICER2                              *( volatile uint32_t *)(NVIC_BASE+0x0088)


/*==========================================================*/
/*Base Addresses For PERIPHERALS REGISTERS*/
/*==========================================================*/



//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: RCC
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t AHBSTR;
	volatile uint32_t CFGR2;
}RCC_t;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: GPIO
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct
{
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t LCKR;
}GPIO_t;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: EXTI
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct
{
	volatile uint32_t IMR;
	volatile uint32_t EMR;
	volatile uint32_t RTSR;
	volatile uint32_t FTSR;
	volatile uint32_t SWIER;
	volatile uint32_t PR;
}EXTI_t;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: AFIO
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct
{
	volatile uint32_t EVCR;
	volatile uint32_t MAPR;
	volatile uint32_t EXTICR[4];
	volatile uint32_t RESERVED0;
	volatile uint32_t MAPR2;
}AFIO_t;


//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register: USART
//-*-*-*-*-*-*-*-*-*-*-*
typedef struct
{
	volatile uint32_t SR;
	volatile uint32_t DR;
	volatile uint32_t BRR;
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t CR3;
	volatile uint32_t GTPR;

}USART_t;



//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//-*-*-*-* PERIPHERAL INSTANTS -*-*-*-*-*
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

#define GPIOA                        ((GPIO_t *)GPIOA_BASE)
#define GPIOB                        ((GPIO_t *)GPIOB_BASE)
#define GPIOC                        ((GPIO_t *)GPIOC_BASE)
#define GPIOD                        ((GPIO_t *)GPIOD_BASE)
#define GPIOE                        ((GPIO_t *)GPIOE_BASE)

#define RCC                          ((RCC_t *)RCC_BASE)

#define EXTI                         ((EXTI_t *)EXTI_BASE)

#define AFIO                         ((AFIO_t *)AFIO_BASE)

#define USART1                       ((USART_t *)USART1_BASE)
#define USART2                       ((USART_t *)USART2_BASE)
#define USART3                       ((USART_t *)USART3_BASE)


//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//-*-*-*-* CLOCK ENABLE MACROS  -*-*-*-*-*
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//GPIO
#define RCC_GPIOA_CLOCK_EN()             (RCC->APB2ENR |=(1<<2))
#define RCC_GPIOB_CLOCK_EN()             (RCC->APB2ENR |=(1<<3))
#define RCC_GPIOC_CLOCK_EN()             (RCC->APB2ENR |=(1<<4))
#define RCC_GPIOD_CLOCK_EN()             (RCC->APB2ENR |=(1<<5))
#define RCC_GPIOE_CLOCK_EN()             (RCC->APB2ENR |=(1<<6))
//AFIO
#define RCC_AFIO_CLOCK_EN()              (RCC->APB2ENR |=(1<<0))
//USART
#define RCC_USART1_CLOCK_EN()            (RCC->APB2ENR |=(1<<14))
#define RCC_USART2_CLOCK_EN()            (RCC->APB1ENR |=(1<<17))
#define RCC_USART3_CLOCK_EN()            (RCC->APB1ENR |=(1<<18))


#define RCC_USART1_DI()            (RCC->APB2RSTR |=(1<<14))
#define RCC_USART2_DI()            (RCC->APB1RSTR |=(1<<17))
#define RCC_USART3_DI()            (RCC->APB1RSTR |=(1<<18))


//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//-*-*-*-*-*-*-*-*-* IVT  -*-*-*-*-*-*-*-*
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//EXTI
#define EXTI0_IRQ                         6
#define EXTI1_IRQ                         7
#define EXTI2_IRQ                         8
#define EXTI3_IRQ                         9
#define EXTI4_IRQ                         10
#define EXTI5_IRQ                         23
#define EXTI6_IRQ                         23
#define EXTI7_IRQ                         23
#define EXTI8_IRQ                         23
#define EXTI9_IRQ                         23
#define EXTI10_IRQ                        40
#define EXTI11_IRQ                        40
#define EXTI12_IRQ                        40
#define EXTI13_IRQ                        40
#define EXTI14_IRQ                        40
#define EXTI15_IRQ                        40
//USART

#define USART1_IRQ                        37
#define USART2_IRQ                        38
#define USART3_IRQ                        39

//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//-*-*-* NVIC IRQ (en/dis)able MACROS -*-*
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

#define	NVIC_IRQ6_EXTI0_ENABLE			(NVIC_ISER0 |= 1<<6)
#define	NVIC_IRQ7_EXTI1_ENABLE			(NVIC_ISER0 |= 1<<7)
#define	NVIC_IRQ8_EXTI2_ENABLE			(NVIC_ISER0 |= 1<<8)
#define	NVIC_IRQ9_EXTI3_ENABLE			(NVIC_ISER0 |= 1<<9)
#define	NVIC_IRQ10_EXTI4_ENABLE			(NVIC_ISER0 |= 1<<10)
#define	NVIC_IRQ23_EXTI9_5_ENABLE		(NVIC_ISER0 |= 1<<23)
#define	NVIC_IRQ40_EXTI10_15_ENABLE		(NVIC_ISER1 |= 1<<8)//40-32=8 position-bit


#define	NVIC_IRQ6_EXTI0_DISABLE			(NVIC_ICER0 |= 1<<6)
#define	NVIC_IRQ7_EXTI1_DISABLE			(NVIC_ICER0 |= 1<<7)
#define	NVIC_IRQ8_EXTI2_DISABLE			(NVIC_ICER0 |= 1<<8)
#define	NVIC_IRQ9_EXTI3_DISABLE			(NVIC_ICER0 |= 1<<9)
#define	NVIC_IRQ10_EXTI4_DISABLE		(NVIC_ICER0 |= 1<<10)
#define	NVIC_IRQ23_EXTI9_5_DISABLE		(NVIC_ICER0 |= 1<<23)
#define	NVIC_IRQ40_EXTI10_15_DISABLE	(NVIC_ICER1 |= 1<<8)//40-32=8 position-bit

//UART

//ENABLE
//USART
#define NVIC_IRQ37_USART1_ENABLE()           (NVIC_ISER1 |=(1<<5)) //37-32=5
#define NVIC_IRQ38_USART2_ENABLE()           (NVIC_ISER1 |=(1<<6)) //38-32=6
#define NVIC_IRQ39_USART3_ENABLE()           (NVIC_ISER1 |=(1<<7)) //39-32=7

//DISABLE
//USART
#define NVIC_IRQ37_USART1_DISABLE()          (NVIC_ICER1 |=(1<<5)) //37-32=5
#define NVIC_IRQ38_USART2_DISABLE()          (NVIC_ICER1 |=(1<<6)) //38-32=6
#define NVIC_IRQ39_USART3_DISABLE()          (NVIC_ICER1 |=(1<<7)) //39-32=7



#endif /* INCL_STM32F103C6_H_ */
