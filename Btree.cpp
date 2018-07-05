/* binary search tree */

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};


int main()
{
	struct node *root;
	int x[30],n,i;
	struct node *bst(int [],int );
	void inorder(struct node *);
	printf("enter the no of elements ");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	root=bst(x,n);
	inorder(root);
	return(0);
}


struct node *bst(int x[30],int n)
{
	int i;
	struct node *tree,*p,*q,*h;
	tree=(struct node *)malloc(sizeof(struct node));
	tree->data=x[0];
	tree->left=NULL;
	tree->right=NULL;
	for(i=1;i<n;i++)
	{
		p=tree;
		while(p!=NULL)
		{
			q=p;
			h=(struct node *)malloc(sizeof(struct node));
			h->data=x[i];
			h->left=NULL;
			h->right=NULL;
			if(h->data<p->data)
			{
				p=p->left;
			}
			else
			{
				p=p->right;
			}
		}
		if(h->data<q->data)
		{
			q->left=h;
		}
		else
		{
			q->right=h;
		}
	}
	return(tree);
}


void inorder(struct node *pq)
{
	if(pq!=NULL)
	{
		inorder(pq->left);
		printf("%d\t",pq->data);
		inorder(pq->right);
	}
}



