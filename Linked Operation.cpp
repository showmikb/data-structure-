/* different operation on linked list */

#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
};


struct list *start,*new1;
void insert(struct list *);
void delete(struct list *);
void count(struct list *);
void display(struct list *);


int main()
{
	int i;
	i=0;
	start=(struct list *)malloc(sizeof(struct list));
	start->next=NULL;
	do
	{
		printf("MENU\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Count\n");
		printf("4. Display\n");
		printf("enter your choice ");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				insert(start);
				break;
			case 2:
				delete(start);
				break;
			case 3:
				count(start);
				break;
			case 4:
				display(start);
				break;
		}
	}while(i<5);
	return(0);
}


void insert(struct list *node)
{
	new1=(struct list *)malloc(sizeof(struct list));
	printf("enter the element ");
	scanf("%d",&new1->data);
	while(node->next!=NULL)
	{
		node=node->next;
	}
	node->next=new1;
}


void delete(struct list *node)
{
	struct list *pre;
	if(node->next!=NULL)
	{
		while(node->next!=NULL)
		{
			pre=node;
			node=node->next;
		}
		pre->next=NULL;
		printf("deleted node is %d\n",node->data);
		free(node);
	}
	else
	{
		printf("empty list\n");
	}
}


void count(struct list *node)
{
	int a;
	a=0;
	while(node->next!=NULL)
	{
		node=node->next;
		a++;
	}
	printf("no of node is %d\n",a);
}


void display(struct list *node)
{
	if(node->next!=NULL)
	{
		printf("the elements are\n");
		while(node->next!=NULL)
		{
			node=node->next;
			printf("%d\t",node->data);
		}
		printf("\n");
	}
	else
	{
		printf("empty list\n");
	}
}




