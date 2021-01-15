//STATIC IMPLEMENTATION OF STACK
#include<stdio.h>
typedef struct stack
{
	int data[10];
	int top;
}node;
void initstack(node* ps)
{
	ps->top = -1;
}
int isempty(node* ps)
{
	if (ps->top == 9)
		return -1;
	return 0;
}
void push(node* ps, int num)
{
	ps->data[++ps->top] = num;
}
int pop(node* ps)
{
	return (ps->data[ps->top--]);
}
int isfull(node* ps)
{
	if (ps->top == 9)
	return 1;
	else
		return 0;
}
int main()
{
	int n,num;
	node s;
	initstack(&s);
	printf("HELLO!!!\n");
	do
	{
		printf("CHOOSE ONE OF THEM\n1.PUSH\n2.POP\n3.EXIT\n");
		printf("YEAH....JUST TYPE IT:");
		scanf("%d", &n);
		switch (n)
		{
		case 1:if (isfull(&s))
			printf("\nSORRY,STACK OVERFLOW\n");
			  else
		      {
			printf("\nENTER WHICH ELEMENT YOU WANT TO PUSH:");
			scanf("%d", &num);
			push(&s,num);
		      }
			break;
		case 2:if (isempty(&s))
			printf("\nSTACK UNDERFLOW\n");
			  else
		{
			printf("\nLAST VALUE IS:%d\n", s.data[s.top]);
			pop(&s);
		}
			break;
		case 3:printf("\nTHANKS FOR USING ME\n");
			break;
		}
	} while (n!=3);
	return 0;
}