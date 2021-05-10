/*check a number to wheather a number is smaller than 10 , 
greater than 10 or equal to 10*/

#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a<10)
	printf("%d is smaller than 10",a);
	else if(a>10)
	printf("%d greater than 10",a);
	else
	printf("%d is equal to 10",a);
	return 0;
}
