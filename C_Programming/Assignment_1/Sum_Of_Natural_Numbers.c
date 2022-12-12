/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: Mahmoud_Mowafey
 */
#include<stdio.h>

int main(void)
{
	int n;
	printf("Enter your integer number\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	int sum = 0,i;
	for(i=0;i<=n;i++)
	{
		sum += i;
	}
	printf("The sum of naturl number between zero and your integer: %d\n",sum);
}

