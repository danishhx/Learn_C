/*    1 2 3 4 5 6 7
      1 2 3 4 5
      1 2 3
      1              */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=7;j>=j-2;j--)
		{
		printf("%d",j);
		}
	printf("\n");	
	}
    return 0;	
}          

      
