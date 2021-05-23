// Input 10 nos from user and display sum of them
#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("enter 10 numbers :\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		sum=sum+i;
	}
	printf("sum=%d",sum);
	return 0;
}
