//Check wheather a character is vowel or consonant

#include<stdio.h>
int main()
{
	int ch;
	printf("enter a character \n ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("IT IS VOWEL");
    else
	printf("IT IS CONSONANT ");
	return 0;
}
