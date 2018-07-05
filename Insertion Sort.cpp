/* insertion sort */

#include <stdio.h>
void insertion(int [],int);
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
	insertion(b,n);
	return(0);
}


void insertion(int b[],int n)
{
	int i,j,y;
	for(i=1;i<n;i++)
	{
		y=b[i];
		for(j=i-1;j>=0 && y<b[j];j--)
		{
			b[j+1]=b[j];
		}
		b[j+1]=y;
	}
	printf("after sorting the elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
}


