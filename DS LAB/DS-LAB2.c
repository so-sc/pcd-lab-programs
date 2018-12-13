#include<stdio.h>
#include<string.h>
int i,j,k,c,m,flag;
char str[100],pat[50],rep[50],ans[150];
void patmat()
{
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++;
m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++)
{
ans[j]=rep[k];
j++;
i=0;
c=m;
}
}
}
else
{
ans[j]=str[c];
j++;
c++;
i=0;
m=c;
}
ans[j]='\0';
}
if(flag==1)
printf("replaced pattern is: %s ",ans);
else
printf("pattern not matched:%s ",ans);
}
void main()
{
printf(" \nenter the string\n");
scanf("%s",str);
printf("enter the pattern\n");
scanf("%s",pat);
printf("enter the replaced string\n");
scanf("%s",rep);
patmat();
}
