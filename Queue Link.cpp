/* different opeartions using linked list */

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};


int main()
{
	int n,choice;
	struct queue *front,*rear;
	int empty(struct queue *);
	int delete(struct queue **,struct queue **);
	void insert(struct queue **,struct queue **,int );
	front=rear=NULL;
	while(1)
	{
		printf("MENU\n");
		printf("1. Insert\n2. Delete\n3. Exit\n");
		printf("enter the choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the no to be inserted ");
				scanf("%d",&n);
				insert(&front,&rear,n);
				break;
			case 2:
				if(empty(front))
				{
					printf("UNDERFLOW\n");
				}
				else
				{
					printf("front element = %d\n",delete(&front,&rear));
				}
				break;
			case 3:
				exit(0);
				break;
		}
	}
	return(0);
}


void insert(struct queue **front,struct queue **rear,int x)
{
	struct queue *p;
	p=(struct queue *)malloc(sizeof(struct queue));
	if (p==NULL)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		p->data=x;
		p->next=NULL;
		if(*rear==NULL)
		{
			*front=p;
		}
		else
		{
			(*rear)->next=p;
			*rear=p;
		}
	}
}


int empty(struct queue *front)
{
	if(front==NULL)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}


int delete(struct queue **front,struct queue **rear)
{
	struct queue *p;
	int x;
	p=*front;
	x=p->data;
	*front=(*front)->next;
	if(*front==NULL)
	*rear=NULL;
	free(p);
	return(x);
}


