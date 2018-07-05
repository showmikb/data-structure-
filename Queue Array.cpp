/* different opeartions on queue using array */

#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
struct queue
{
	int data [MAXSIZE];
	int front,rear;
};


int main()
{
	void insert(struct queue *,int );
	int delete(struct queue *);
	int empty(struct queue *);
	struct queue q;
	int x,n,elt;
	char ch;
	q.front=0;
	q.rear=-1;
	do
	{
		printf("MENU\n");
		printf("1. Insert\n2. Delete\n3. Exit\n");
		printf("enter the choice ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter the no to be inserted ");
				scanf("%d",&elt);
				insert(&q,elt);
				break;
			case 2:
				if(empty(&q))
				printf("UNDERFLOW\n");
				else
				x=delete(&q);
				printf("delete element = %d",x);
				break;
			case 3:
				exit(0);
				break;
		}
	}
	while(n<4);
	return(0);
}


int empty(struct queue *pq)
{
	if(pq->rear<pq->front)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}


void insert(struct queue *pq,int x)
{
	if(pq->rear==MAXSIZE-1)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		pq->data[1+pq->rear]=x;
	}
}

int delete(struct queue *pq)
{
	return(pq->data[pq->front++]);
} 



