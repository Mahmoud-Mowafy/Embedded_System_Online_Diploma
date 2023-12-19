/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: Mahmoud_Mowafey
 */
#include<stdio.h>

int main(void)
{
	char x;
	printf("Enter your token : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	if( ( ( x >= 65 ) && ( x <= 90 ) ) || ( ( x >= 97 ) && ( x <= 122 ) ) )
		printf("Alphabet Character\n");
	else
		printf("Not an Alphabet Character\n");
	fflush(stdin);
	fflush(stdout);
}  
