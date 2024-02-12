/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mahmoud Mowafey
 * @brief          : Main program Toggling Led
 * @platform	   : Stm32f1030c
 ******************************************************************************
 */
typedef volatile unsigned int vuint32_t ;
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
// register address
#define GPIOA_BASE			0x40010800
#define GPIOA_CRH_OFFSET	0x04
#define GPIOA_ODR_OFFSET	0x0C
#define GPIOA_CRH			*(vuint32_t *)(GPIOA_BASE + GPIOA_CRH_OFFSET )
#define GPIOA_ODR			*(vuint32_t *)(GPIOA_BASE + GPIOA_ODR_OFFSET )
//RCC_Register Address
#define RCC_BASE			0x40021000
#define APB2ENR_OFFSET		0x18
#define RCC_APB2ENR			*(vuint32_t *)(RCC_BASE + APB2ENR_OFFSET )
int main(void)
{
   /*
	initialize the clock for GPIOA
	IOPAEN: IO port A clock enable
	Set and cleared by software.
	0: IO port A clock disabled
	1: IO port A clock enabled
  */
	RCC_APB2ENR |= (1<<2);
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;
    /* Loop forever */
	while(1)
	{
		GPIOA_ODR |= (1<<13);
		for(int i = 0; i < 5000; i++);
		GPIOA_ODR &=~ (1<<13);
		for(int i = 0; i < 5000; i++);
	}
}
