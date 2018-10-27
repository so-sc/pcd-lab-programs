#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,z;
char op;
printf("enter a,b \n");
scanf("%d%c%d",&a,&b);
printf("\n_______MENU_______");
printf("\n\t\t1.ADDITION "+"");
printf("\n\t\t2.SUBTRACTION "-"");
printf("\n\t\t3.MULTIPLICATION "*"");
printf("\n\t\t4.DIVISION "/"");
printf("Enter the choice")
scanf("%c",&op);
switch(op)
{
case '+':z=a+b;
          printf("res=%d",z);
             break;
case '-':z=a-b;
          printf("res=%d",z);
           break;
case '*':z=a*b;
         printf("res=%d",z);
break;
case '/':z=a/b;
         printf("res=%d",z);
break;

default :printf("invalid option ");
break;
}
}
