/*
 * Lecture_3 @ Unit_2 :
 * 						"C_Basics Final Challenging Lab"
 *
 *  Created on: Nov 20, 2022
 *      Author: Mahmoud_Mowafey
 */

#include<stdio.h>

int main()
{
	int i=0,j=0;
	fflush(stdin);
	fflush(stdout);
	for(i=0;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
			printf("%d ",j);
		}
		  printf("\n");
	}
	return 0;
}

