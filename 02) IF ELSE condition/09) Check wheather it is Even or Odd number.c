// check wheather it is even or odd number

#include<stdio.h>
int main()
{
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	if(num%2==0)
	printf("Even number",num);
	else
	printf("Odd number",num);
	return 0;
}
