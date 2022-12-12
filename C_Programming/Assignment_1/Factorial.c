/*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Mahmoud_Mowafey
 */


#include<stdio.h>

int factorial(int n);
int main(void)
{
	int num;
	printf("Enter your number\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	int i,fact=1;
	if(num & 1<<31 )
		printf("ERROR!! Factorial of negative number doesn't exist\n");
	else
	{
		for(i=1;i<=num;i++)
		{
			fact *= i;
		}
		printf("Factorial of your number: %d\n",fact);

		printf("Factorial of your number using Recursive: %d\n",factorial(num));
	}
}

int factorial(int n)
{
	if(n==1)
		return 1;
	else
		return (n * factorial(n-1) );
}

