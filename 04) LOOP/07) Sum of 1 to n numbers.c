// Sum of 1 to n numbers

#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
	return 0;
}
