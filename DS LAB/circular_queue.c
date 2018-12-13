#include<stdio.h>
#include<stdlib.h>
#define ms 10

int front,rear,i;
int item[ms];
front=ms-1,rear=ms-1;

void cqinsert(int val)
{
	if(front==(rear+1)%ms)
	printf("circular queue is full\n");
	else
	{        
		rear=(rear+1)%ms;
		item[rear]=val;
	}
}
int cqdelete()
{
	if(front==rear)
	printf("circular queue is empty\n");
	else
	{
		front=(front+1)%ms;
		return(item[front]);
	}
}

void display()
{
	if(front==rear)
	printf("circular queue is empty\n");
	else
	{
		if(front<rear)
		{
			for(i=front+1;i<=rear;i++)
			{
			printf("the elements are:\n");
			printf("%d\t",item[i]);
			}
		}
	        else 
		{
			if(front!=ms-1)
			{       
				printf("the elements are:\n");
				for(i=front+1;i<=ms-1;i++)
				{
				
				printf("%d\t",item[i]);
				}
			} 
			printf("the elements are:\n");
			for(i=0;i<=rear;i++)
			{
			
			printf("%d\t",item[i]);
			}
		}
	}
}


void main()
{
int  ch,v,ele;
while(1)
{
printf("enter your choice:\n 1.insert\n2.delete\n3.display\n4.exit\n");
scanf("%d",&ch);



	switch(ch)
	{
		case 1: printf("enter a value to insert\n");
                        scanf("%d",&v);
			cqinsert(v);
			break;
		case 2: ele=cqdelete();
			printf("the deleted element is:%d\n",ele);
			break;
		case 3:display();
			break;
		case 4: exit(0);
			
		default: printf("invalid choice!!!!!\n");
	}
}
}

			
	

