// Program to find Perfect Number using For Loop
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf(" Enter any number ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(n==sum)
	printf(" It is perfect number");
	else
	printf(" It is not perfect number");
	return 0;
	
}

