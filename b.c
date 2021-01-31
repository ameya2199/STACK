//DYNAMIC IMLEMENTATION OF STACK
#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data[10];
	int next;
}stack;
stack* temp,*top,*newnode;
void initstack()
{
	 top = NULL;
}
int isempty()
{
	if (top == NULL)
		return 0;
	return -1;
}
void push(int num)
{
	newnode = (stack*)malloc(sizeof(stack));
	newnode->data = num;
	newnode->next = top;
	top = newnode;
}
void pop()
{
	int num;
	temp = top;
	top = top->next;
	free(temp);
}
int main()
{
	int n,num;
	initstack();
	do
	{
		printf("\nCHOOSE ANYONE OF THEM:\n1.PUSH\n2.POP\n3.EXIT\n");
		printf("WAITING...PLEASE ENTER:");
		scanf("%d", &n);
		printf("\n");
		switch (n)
		{
		case 1:
		{
			printf("\nENTER NO.:");
			scanf("%d", &num);
			push(num);
		}
			  break;
		case 2:if (isempty())
		{
			printf("\nSORRY,STACK UNDERFLOW\n");
		}
			  else
		{
			printf("\nTHE POPPED ELEMENT IS %d",newnode->data[newnode->next]);
			pop();
		}
			  break;
		case 3:printf("BYE...BYE\n");
			break;
		}
	} while (n < 2);
	return 0;
}