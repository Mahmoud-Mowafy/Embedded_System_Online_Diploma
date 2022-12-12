/*
 * main.c
 *
 *  Created on: Nov 25, 2022
 *      Author: Mahmoud_Mowafey
 */


#include<stdio.h>
int main()
{
	char x;
	char y='n';
	do{
		printf("Enter a char : \n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&x);
		switch(x)
		{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			printf("\n Vowel\n");
			break;
		default:
			printf("\n Constant \n");
			break;
		}
		fflush(stdin);
		fflush(stdout);
		printf("\n");
		y = getchar();
	}while(y!='0');
		return 0;
}



