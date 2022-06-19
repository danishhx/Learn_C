/*   	 4
    	 3 3 
	 2 2 2
	 1 1 1 1 */
     
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d",(4-i+1));
	    }  
	    printf("\n");
    }
	return 0;
	
}    
