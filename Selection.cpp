/* selection sort */

#include<stdio.h>
void selection(int [],int);
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
	selection(b,n);
	return(0);
}


void selection(int b[],int n)
{
	int i,j,large,index;
	for(i=n-1;i>0;i--)
	{
		large=b[0];
		index=0;
		for(j=1;j<=i;j++)
		{
			if(large<=b[j])
			{
				large=b[j];
				index=j;
			}
		}
		b[index]=b[i];
		b[i]=large;
	}
	printf("after sorting the elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
} 


