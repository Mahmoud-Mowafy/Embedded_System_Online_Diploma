/*
 * main.c
 *
 *  Created on: Nov 27, 2022
 *      Author: Mahmoud_Mowafey
 */


#include<stdio.h>
int main(void)
{
	char y;
	do{
		float a;
		printf("Enter your number: \n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&a);
		int x = (int) a;
		printf("integer number after explicit casting : %d\n",x);
		if(a == 0)
			printf("your number is Zero \n");
		else if( ( x & (1<<31) ))
			printf("your number is Negative \n");
		else
			printf("your number is Positive \n");
		y = getchar();
	}while(y!='n');
	return 0;
}

