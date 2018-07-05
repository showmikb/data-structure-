/* bubble sorting */

#include<stdio.h>
#define true 1
#define false 0
void bubble(int [],int);
main()
{
	int n,i,b[100];
	printf("enter the no of terms ");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	bubble(b,n);
	return(0);
}


void bubble(int b[],int n)
{
	int i,pass,ex=true,temp,j;
	for(pass=0;pass<n-1 && ex==true;pass++)
	{
		ex=false;
		for(j=0;j<n-pass-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				ex=true;
			}
		}
	}
	printf("after sorting the terms are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
}


