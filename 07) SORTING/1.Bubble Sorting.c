//Bubble Sorting

#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	
	printf("enters the no. of elements\n");
	scanf("%d",&n);
	
	printf("enter the %d intergers value\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After bubble sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
	return 0;
}
