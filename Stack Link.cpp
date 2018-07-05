/* different operations on stack using linked list */

#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};


int main()
{
	struct stack *s;
	int x,n,elt;
	void push(struct stack **,int );
	int empty(struct stack *);
	int pop(struct stack **);
	int stacktop(struct stack *);
	s=NULL;
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
				if(empty(s))
				printf("UNDERFLOW\n");
				else
				x=pop(&s);
				printf("popped element = %d\n",x);
				break;
			case 3:
				if(empty(s))
				printf("UNDERFLOW\n");
				else
				x=stacktop(s);
				printf("top element = %d\n",x);
				break;
		}
	}
	while(n<4);
	return(0);
}


int empty(struct stack *ps)
{
	if(ps==NULL)
	{
		return(1);
	}
	else
	{
	return(0);
	}
}


void push(struct stack **ps,int x)
{
	struct stack *p;
	p=(struct stack *)malloc(sizeof(struct stack));
	p->data=x;
	if(p==NULL)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		if(*ps==NULL)
		{
			p->next=NULL;
			*ps=p;
		}
		else
		{
			p->next=*ps;
			*ps=p;
		}
	}
}


int pop(struct stack **ps)
{
	struct stack *h;
	int x;
	h=*ps;
	x=h->data;
	if(h->next==NULL)
	{
		*ps=NULL;
	}
	else
	{
		*ps=h->next;
	}
	free(h);
	return(x);
}


int stacktop(struct stack *ps)
{
	return(ps->data);
}



