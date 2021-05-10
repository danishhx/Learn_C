//Wap to check a person is eligible for VOTE or NOT 

#include<stdio.h>
int main()
{
	int age;
	printf("enter your age : ");
	scanf("%d",&age);
	if(age>=18)
	printf("HE/SHE is eligible for vote");
	else
	printf("HE/SHE is not eligible for vote");
	return 0;
} 
