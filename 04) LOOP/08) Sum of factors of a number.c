// Sum of factors of a number
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0);
	    sum=sum+i;
	}
	printf("sum of factors %d",sum);
	return 0;
}
