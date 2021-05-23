///*Find the largest/greatest from three numbers USING ONLY else if
// or without using logical operators*/

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
	
	// finding the largest number USING ONLY else if or without using logical operators
	
	if(a>b)
	{ 
	   if (a>c)
	   {
	        printf("a=%d is largest",a);
       }
       else
       {
            printf("c=%d is largest",c);
       }
    }
	else
	{
		if(b>c)
		{
			printf("b=%d is largest",b);
		}
		else
		{
			printf("c=%d is largest",c);
		}
	}
	return 0;	
}
