//Find the largest/greatest from three numbers USING ONLY IF

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
	
	// finding the largest number USING ONLY IF
	
	if(a>b && a>c)
	printf("a=%d is largest",a);
	if(b>a && b>c)
	printf("b=%d is largest",b);
	if(c>a && c>b)
	printf("c=%d is largest",c);
	return 0;	
}
