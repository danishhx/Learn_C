// Input 10 numbers from user and display the maximum  & minimum numbers

#include<stdio.h>
int main()
{
	int i,n,max=9999;
	int min=-9999;
	printf("enter 10 numbers from user : \n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		if(n>max)
		{
			max=n;
		}
		if(n<min)
		{
			min=n;
		}
	}
	printf("maximum  is :%d",max);
	printf("enter 10 numbers from user : \n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		if(n>max)
		{
			max=n;
		}
	}
	printf("maximum no is : %d",max);
	printf("minimum no is : %d",min);
}
