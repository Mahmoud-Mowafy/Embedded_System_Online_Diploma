 /*
 * main.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Mahmoud_Mowafey
 */


#include<stdio.h>
float calculator(float a, float b,char op);

int main(void)
{
float x,y;
char op;
printf(Enter your numbers: );
fflush(stdin);
fflush(stdout);
scanf(%f%f,&x,&y);
printf(For math operations you can enter +,-,*,/: );
fflush(stdin);
fflush(stdout);
scanf(%c,&op);
printf(Result of your operation: %fn,calculator(x,y,op));
}
float calculator(float a, float b, char op)
{
float result ;
switch(op)
{
case '+':
result = a+b;
break;
case '-':
result = a-b;
break;
case '*':
result = a*b;
break;
case '/':
result = a/b;
break;
}
return result;
}

