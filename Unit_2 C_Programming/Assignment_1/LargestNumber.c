/*
 * main.c
 *
 *  Created on: Nov 27, 2022
 *      Author: Mahmoud_Mowafey
 */

#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter three numbers separated by a tap : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d%d",&a,&b,&c);
	int large= (a>b) ? ( a>c ? a : c ) : ( b>c ? b : c  );
	printf("the largest number is : %d\n", large);
	return 0;
}

