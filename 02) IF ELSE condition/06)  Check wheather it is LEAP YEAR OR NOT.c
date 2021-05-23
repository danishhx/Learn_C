//check wheather it is leap year or not

#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year to check leap year");
	scanf("%d",&year);
	  
	/*condition to check leap year
	Leap Year:
If a year is divisible by 4, 100 and 400 then it is a leap year.
If a year is divisible by 4 but not divisible by 100 then it is a leap year

Not Not a Leap Year:
If a year is not divisible by 4 then it is not a leap year
If a year is divisible by 4 and 100 but not divisible by 400 then it is not a leap year*/

	if(year%4==0 && year%100!=0)
	printf("It is a leap year");
	else if(year%100==0 && year%400==0) 
	printf("It is a leap year");
	else 
	printf("It is not a leap year");
	return 0;
}
