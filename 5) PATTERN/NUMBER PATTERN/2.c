/* 1
   1 2
   1 2 3
   1 2 3 4   */

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			printf("%d",j);
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
