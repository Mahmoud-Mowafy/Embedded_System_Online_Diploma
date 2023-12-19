 /*
 * File:    uart.c
 * Created: 18/12/2023 4:13:56 AM
 * Author:  Mahmoud Mowafey
 */ 

/**********************************************************************
* Includes
**********************************************************************/
#include "uart.h"
/************************************************************************/

/*********************************************************************
* Module Preprocessor Macros
**********************************************************************/
// define the UART base address
#define UART_BASE_ADDRESS    0x101f1000
// define the UART data register address
#define UART0DR 			*( (volatile uint32*) ( (uint32*)UART_BASE_ADDRESS) ) 

/**********************************************************************
* Module Function Definitions
**********************************************************************/
/*
 * Implementation of send_string function:
 * Parameter[s]: 
 *				[in]  : Pointer to the passed string.
 *              [out] : None
 * Description:
 * 				This function will take a string and send this string through the UART module inside the MCU. 
 */

void Uart_Send_String(uint8* p_tx_string)
{
	while( *p_tx_string != '\0')
	{
			UART0DR = (uint32)(*p_tx_string);
			p_tx_string++;
	}
}
/****************************************************************************/