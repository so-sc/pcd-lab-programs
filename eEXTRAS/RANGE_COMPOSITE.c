#include<stdio.h>
void main()
{
int a,b,i,j,flag=0;
printf("enter the range");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
if(i%2!=0)
{
printf("%d is composite and odd number\n",i);
flag=1;
break;
}
}
}
}
if(flag==0)
printf("no composite and odd number");
}

