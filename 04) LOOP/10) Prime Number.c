// Program to find Prime Number using For Loop

#include<stdio.h>
int main()
{
	int n,i;
	int count=0;
	printf(" Enter any number ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==0)
	printf(" It is prime number");
	else
	printf(" It is not prime number");
	return 0;
	
}

