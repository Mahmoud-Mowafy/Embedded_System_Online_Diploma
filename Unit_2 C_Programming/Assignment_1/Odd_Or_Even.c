/*
 * main.c
 *
 *  Created on: Nov 25, 2022
 *      Author: Mahmoud_Mowafey
 */


#include<stdio.h>
int main()
{
	int x;
	char y='n';
	do{
		printf("Enter a number : \n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&x);
		if(x%2 == 0)
			printf("Even");
		else
			printf("Odd");
		fflush(stdin);
		fflush(stdout);
		printf("\n");
		y = getchar();
	}while(y!='n');
		return 0;
}

