// Input 10 numbers from user and display the maximum numbers
#include<stdio.h>
int main()
{
	int n,i;
	int max=-9999;
	printf("enter 10 numbers from user : \n");
	for(i=1;i<=2;i++)
	{
		scanf("%d",&n);
		if(n>max)
		{
			max=n;
		}
	}
	printf("maximum no is : %d",max);
	return 0;
}
