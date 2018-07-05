/* creation of linked list */

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};


void display(struct node *);
int main()
{
	struct node *p,*list,*h;
	int i,n;
	printf("enter the no of nodes ");
	scanf("%d",&n);
	p=(struct node *)malloc(sizeof(struct node));
	printf("enter the data ");
	scanf("%d",&p->data);
	p->next=NULL;
	list=p;
	i=1;
	h=list;
	while(i<n)
	{
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		h->next=p;
		h=h->next;
		h->next=NULL;
		i++;
	}
	display(list);
	return(0);
}


void display(struct node *s)
{
	if(s==NULL)
	{
		printf("empty list\n");
	}
	else
	{
		while(s!=NULL)
		{
			printf("%d\t",s->data);
			s=s->next;
		}
	}
	printf("\n");
}


