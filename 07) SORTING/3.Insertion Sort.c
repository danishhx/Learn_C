#include<stdio.h>
 int main()
{
    int a[100],n,i,j,key;
     
    printf("\n Enter the Number of Elements: ");
    scanf("%d",&n);
     
    printf("\n Enter %d Elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<n;i++)
    {
    	key=a[i];
    	for(j=i-1;j>=0 &&key<a[j];j--)
    	{
    		a[j+1]=a[j];
		}
		a[j+1]=key;
		
	}
	    printf("\n The Sorted array in ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
