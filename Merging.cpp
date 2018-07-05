/* merging */

#include<stdio.h>
void merge(int [],int [],int,int,int [],int);
main()
{
	int a[50],b[50],c[50],m,n,i,k;
	printf("enter the no of terms of the 1st array ");
	scanf("%d",&m);
	printf("enter the elements\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the no of terms of the 2nd array ");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	k=m+n;
	merge(a,b,m,n,c,k);
	return(0);
}


void merge(int a[],int b[],int m,int n,int c[],int k)
{
	int i,j,l;
	i=0;j=0;l=0;
	while(i<m && j<n)
	if(a[i]<b[j])
	{
		c[l]=a[i];
		i++;
		l++;
	}
	else
	{
		c[l]=b[j];
		j++;
		l++;
	}
	while(i<m)
	{
		c[l++]=a[i];
		i++;
	}
	while(j<n)
	{
		c[l++]=b[j];
		j++;
	}
	printf("the merged elements are\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
}

