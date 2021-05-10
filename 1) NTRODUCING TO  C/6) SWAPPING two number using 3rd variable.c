//swap two number using third variable (extra variable).

#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping \n");
    printf("The value of a=%d and the value of b=%d",a,b);
	return 0;
}
