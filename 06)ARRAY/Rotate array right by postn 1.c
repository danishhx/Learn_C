/* Name- Md Danish
   Dept- cse

Program name- Rotate an array be postion 1
*/
#include<stdio.h>

int main()
{
	int a[10],n,i,k,temp;

   printf("enter the array size:");
   scanf("%d",&n);
   
   printf("enter the element:");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   
   printf("Rotate the array towards right by postn:");
   scanf("%d",&k);
   
   temp=a[n-1];
   for(i=n-1;i>=1;i--)
   {
   	a[i]=a[i-1];
   }
   a[i]=temp;
   
   for(i=0;i<n;i++)
   {
   	printf("%d",a[i]);
   }
}
