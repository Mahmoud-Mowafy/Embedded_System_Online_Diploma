/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mahmoud Mowafey
 * @brief          : Main program body
 * @date           : 12_Oct_2024 
 ******************************************************************************
 */

typedef volatile unsigned int vuint32_t;
#include <stdint.h>

// register address
#define GPIOA_BASE 0x40010800
#define GPIOA_CRH_OFFSET 0x04
#define GPIOA_ODR_OFFSET 0x0C
#define GPIOA_CRH *(vuint32_t *)(GPIOA_BASE + GPIOA_CRH_OFFSET)
#define GPIOA_ODR *(vuint32_t *)(GPIOA_BASE + GPIOA_ODR_OFFSET)

// RCC_Register Address
#define RCC_BASE 0x40021000
#define APB2ENR_OFFSET 0x18
#define RCC_APB2ENR *(vuint32_t *)(RCC_BASE + APB2ENR_OFFSET)

// bit fields
#define RCC_IOPEN (1 << 2)
#define GPIOA13 (1UL << 13)

typedef union
{
    vuint32_t all_fields;
    struct
    {
        vuint32_t reserved : 13;
        vuint32_t P_13 : 1;
    } Pin;
} R_ODR_t;

volatile R_ODR_t *R_ODR = (volatile R_ODR_t *)(GPIOA_BASE + GPIOA_ODR_OFFSET);
/* define unintialized variables,
   to be stored in the bss section */
unsigned char g_var[3];
// unsigned char const c_var[3] = {1, 2, 3};

int main(void)
{

    // init the clock for GPIOA
    //	IOPAEN: IO port A clock enable
    // Set and cleared by software.
    // 0: IO port A clock disabled
    // 1: IO port A clock enabled
    RCC_APB2ENR |= RCC_IOPEN;

    GPIOA_CRH &= 0xFF0FFFFF;
    GPIOA_CRH |= 0x00200000;
    /* Loop forever */
    while (1)
    {
        // GPIOA_ODR |= (1 << 13);
        R_ODR->Pin.P_13 = 1;
        for (int i = 0; i < 5000; i++)
            ;
        // GPIOA_ODR &= ~(1 << 13);
        R_ODR->Pin.P_13 = 0;
        for (int i = 0; i < 5000; i++)
            ;
    }
}
