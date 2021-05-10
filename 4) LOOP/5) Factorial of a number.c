// Factorial of a number

#include<stdio.h>
int main()
{
	int num,i;
	int fact=1;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("fact=%d",fact);
	return 0;
}
