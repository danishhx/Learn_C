//Find the largest/greatest from three numbers

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of c=");
	scanf("%d",&c);
	
	// finding the largest number 
	
	if(a>b && a>c)
	printf("a=%d is largest",a);
	else if(b>a && b>c)
	printf("b=%d is largest",b);
	else
	printf("c=%d is largest",c);
	return 0;	
}
