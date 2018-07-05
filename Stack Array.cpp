/* different operations on stack using array */

#include<stdio.h>
#define MAXSIZE 100
struct stack
{
	int data[MAXSIZE];
	int top;
};
int main()
{
	struct stack s;
	int x,n,elt;
	void push(struct stack *,int );
	int empty(struct stack *);
	int pop(struct stack *);
	int stacktop(struct stack *);
	s.top=-1;
	do
	{
		printf("MENU\n");
		printf("1.Push\n2.Pop\n3.Stacktop\n4.Exit\n");
		printf("enter choice ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter the no to be pushed ");
				scanf("%d",&elt);
				push(&s,elt);
				break;
			case 2:
				if(empty(&s))
				{
					printf("UNDERFLOW\n");
				}
				else
				{
					x=pop(&s);
					printf("popped element = %d\n",x);
					break;
				}
			case 3:
				if(empty(&s))
				{
					printf("UNDERFLOW\n");
				}
				else
				{
					x=stacktop(&s);
					printf("top element = %d\n",x);
					break;
				}
			}
	}
	while(n<4);
	return(0);
}


void push(struct stack *ps,int x)
{
	if(ps->top==MAXSIZE-1)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		ps->data[++ps->top]=x;
	}
}
int empty(struct stack *ps)
{
	if(ps->top==-1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
int pop(struct stack *ps)
{
	return(ps->data[ps->top--]);
}
int stacktop(struct stack *ps)
{
	return(ps->data[ps->top]);
}

