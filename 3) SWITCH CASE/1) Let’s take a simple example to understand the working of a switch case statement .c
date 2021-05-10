//Let’s take a simple example to understand the working of a switch case statement
#include <stdio.h>
    int main() 
	{
        int num;
        printf("enter a number");
        scanf("%d",&num);
        switch (num) 
		{
            case 1:
                printf("Value is 1");
                break;
            case 2:
                printf("Value is 2");
                break;
            case 3:
                printf("Value is 3");
                break;
            default: printf("Out of range");
        }
        return 0;
    }
