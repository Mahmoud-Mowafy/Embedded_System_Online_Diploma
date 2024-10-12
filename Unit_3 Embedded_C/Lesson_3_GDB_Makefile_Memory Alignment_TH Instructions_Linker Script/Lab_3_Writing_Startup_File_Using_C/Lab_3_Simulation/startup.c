/* startup_cortexM3.c
   Mahmoud Mowafey
*/
#include "stdint.h"

/* Define the Stack_top at 0x20001000 */
#define STACK_TOP 0X20001000
void Reset_Handler(void);
void Default_Handler(void);

void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));
void Bus_Fault_Handler(void) __attribute__((weak, alias("Default_Handler")));

/* some variable needed to copy the data from the flash memory to the data memory */
extern uint32_t _E_TEXT;
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_BSS;
extern uint32_t _E_BSS;

uint32_t vectors[] __attribute__((section(".vectors"))) =
    {
        /* put the stack_top address as the first element of the array to be written inside first location of the flash */
        (uint32_t)STACK_TOP,
        /* write the Handlers according to the Interrupt Vector Table */
        (uint32_t)&Reset_Handler,
        (uint32_t)&NMI_Handler,
        (uint32_t)&Bus_Fault_Handler

};

void Reset_Handler(void)
{
    /* write your code to copy the data from the flash memory to the data memory */
    uint32_t DATA_SIZE = (uint8_t *)&_E_DATA - (uint8_t *)&_S_DATA;
    uint8_t *P_src = (uint8_t *)&_E_TEXT;
    uint8_t *P_dst = (uint8_t *)&_S_DATA;
    for (int i = 0; i < DATA_SIZE; i++)
    {
        *((uint8_t *)P_src++) = *((uint8_t *)P_dst);
    }

    /* write your code to initialize the bss section with zero in the data memory */
    uint32_t BSS_SIZE = (uint8_t *)&_E_BSS - (uint8_t *)&_S_BSS;
    P_src = (uint8_t *)&_E_DATA;

    for (int i = 0; i < DATA_SIZE; i++)
    {
        *((uint8_t *)P_src++) = (uint8_t)0;
    }
    main();
}
void Default_Handler(void)
{
    Reset_Handler();
}
