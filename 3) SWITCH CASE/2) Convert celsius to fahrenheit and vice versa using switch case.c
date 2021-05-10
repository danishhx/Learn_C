//convert celsius to fahrenheit and vice versa using switch case

#include<stdio.h>
int main()
{
	float c,f;
	int choice;
	printf(" ENTER '1' TO CONVERT FAHRENHEIT TO CELSIUS \n");
	printf(" ENTER '2' TO CONVERT CELSIUS TO FAHRENHEIT \n");
	
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf(" enter fahrenheit value");
		        scanf("%f",&f);
		        c=5*(f-32)/9;
		        printf(" FAHRENHEIT TO CELSIUS conversion is =%f",c);
		        break;
		case 2: printf(" enter celsius value");
		        scanf("%f",&c);
		        f=(c*9/5)+32;
		        printf(" CELSIUS TO FAHRENHEIT conversion is =%f",f);
		        break;
		defaut: printf("invalid choice");        
	}
	return 0;	
}
