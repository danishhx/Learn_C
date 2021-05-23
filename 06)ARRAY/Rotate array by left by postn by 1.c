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
   
   printf("Rotate the array towards left by postn:");
   scanf("%d",&k);
   
   temp=a[0];
   for(i=0;i<n-1;i++)
   {
   	a[i]=a[i+1];
   }
   a[i]=temp;
   
   for(i=0;i<n;i++)
   {
   	printf("%d",a[i]);
   }
}
