#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
float a,b,c,d,x1,x2,real,img;
printf("enter the value of a,b,c \n");
scanf("%f%f%f",&a,&b,&c);
if(a==0 && b==0)
{
printf("roots are not defined");
exit(0);
}
else if(a==o)
{
x1=-c/b;
printf("x1=%f is linear equation \n,x1");
exit(0);
}
d=b*b-4*a*c;
if(d==0)
{
x1=x2=-b/(2*a);
printf("x1=x2=%f is real & equal roots \n,x1");
}
else if(d>0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("x1=%f and x2=%f are real and distinct \n",x1,x2);
}
else
{
real=-b/2*a;
img=sqrt(f abs(d))/(2*a);
printf("x1=%f+i%f and x2=f-i%f",real,img,real,img);
printf("complex roots ");
}
}
