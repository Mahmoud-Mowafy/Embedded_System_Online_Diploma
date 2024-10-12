 /* startup_cortexM3.s
   Mahmoud Mowafey
 */


.section .vectors

/* SRAM started from 0x200000000 and we will make the stack started from address 0x20001000*/
/* assign the value of the stack pointer in a 32-bit var using the .word keyword */
.word 0x20001000

/* assign a 32-bit var using the .word keyword to jump to the reset section using the _reset symbol */
.word _reset


/* assign a 32-bit var using the .word keyword to jump to each vector_handler --->*/
.word Vector_handler							/* 02 NMI */
.word Vector_handler							/* 03 Hard Fault */
.word Vector_handler							/* 04 NM Fault */
.word Vector_handler							/* 05 Bus Fault */
.word Vector_handler							/* 06 Usage Fault */
.word Vector_handler							/* 07 RESERVED */
.word Vector_handler							/* 08 RESERVED */
.word Vector_handler							/* 09 RESERVED */
.word Vector_handler							/* 10 RESERVED */
.word Vector_handler							/* 11 SV call */
.word Vector_handler							/* 12 Debug rederved */
.word Vector_handler							/* 13 RESERVED */
.word Vector_handler							/* 14 PendSV */
.word Vector_handler							/* 15 SysTick */
.word Vector_handler							/* 16 IRQ0 */
.word Vector_handler							/* 17 IRQ1 */
.word Vector_handler							/* 18 IRQ2 */
.word Vector_handler							/* 19 ... */

.section .text
_reset:
	bl main
	b .

.thumb_func									/* To make the compiler considers the 16 & 32 instructions */

Vector_handler:
	b _reset

