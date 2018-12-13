#include<stdio.h>
#include <stdlib.h>
#define max 5
int s[max];
int top=-1;
void push(int item);
void pop();
void palindrome();
void display();

void main()
{
  int choice,item;
  while(1)
  {
    printf("\n\n\n\n~~~~~MENU~~~~~~:");
    printf("\n1.push\n2.pop\n3.palindrome\n4.display\n5.exit");
    printf("\n please enter you choice:");
    scanf("%d",choice);
    switch(choice)
    {
      case 1:printf("\n enter an element to be pushed :");
              scanf("%d",&item);
              push(item);
              break;
      case 2:pop();
              break;
      case 3:palindrome();
              break;
      case 4:display();
            break;
      case 5:exit(1);
         default: printf("please enter a valid choice\n" );
                  break;
    }
  }
}
void push(int item)
{
  if(top==max-1)
  {
    printf("\n~~~~stack overflow~~~~");
    return;
  }
  top=top+1;
  s[top]=item;
}

void pop()
{
  int item,i;
  if(top==-1)
  {
    printf("\n~~stack underflow~~~");
    return;
  }
  printf("\nstack elements are:\n ");
  for(i=top;i>=0;i--)
  {
  printf("%d\n",s[i]);
}
}
void palindrome()
{
  int flag=1,i;

  for(i=0;i<=top/2;i++)
  {
    if(s[i]!=s[top-1])
    {
      flag=0;
      break;
    }
  }
  if(flag==1)
  {
  printf("\n it is a palindrome number");
}
  else
{  printf("\nit is not a palindrome number");
}
display();
}
void display()
{
  int i;
  if(top==-1)
  {
    printf("\n stack is empty");
    return;
  }
  printf("\n stack elements are");
  for(i=top;i>=0;i--)
  {
    printf("%d\n",s[i]);
  }
}
