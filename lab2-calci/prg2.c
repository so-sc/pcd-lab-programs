#include<stdio.h>
#include<stdlib.h>
void main()
{
float a,b,c;
char o;
printf("enter a,o,b \n");
scanf("%f%s%f",&a,&o,&b);
switch(0)
{
case '+':z=a+b;
          printf("res=%f",z);
             break;
case '-':z=a-b;
          printf("res=%f",z);
           break;
case '*':z=a*b;
         printf("res=%f",z);
break;
case '/':z=a/b;
         printf("res=%f",z);
break;
default :printf("invalid option ");
}

