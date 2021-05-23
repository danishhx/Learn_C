//swap two number without using third variable (extra variable).

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	//swapping without 3rd variable
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("after swapping \n");
    printf("The value of a=%d and the value of b=%d",a,b);
	return 0;
}
