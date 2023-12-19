 /*
 * File:    app.c
 * Created: 18/12/2023 4:13:56 AM
 * Author:  Mahmoud Mowafey
 */ 
/**********************************************************************
* Includes
**********************************************************************/
#include "uart.h"
/**********************************************************************
* Application Variable Definitions
**********************************************************************/
uint8 string_buffer[100] = "Learn-in-depth:Mowafey";
const uint8 string_buffer2[100] = "Learn-in-depth:Mowafey";
/**********************************************************************
* Application Function Definitions
**********************************************************************/
/*
 * Implementation of main function of the application:
 * Parameter[s]: 
 *				[in]  : None
 *              [out] : None
 * Description:
 * 				This function will pass a string to send_string function of the UART module. 
 */
void main(void)
{
	Uart_Send_String(string_buffer);
}
/****************************************************************************/