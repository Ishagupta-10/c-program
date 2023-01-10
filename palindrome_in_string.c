#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	scanf("%[^\n]s",s1);
    strlwr(s1);
	strcpy(s2,s1);
	strrev(s1);
	if(strcmp(s1,s2)==0)
	printf("palindrome");
	else
	printf("not");
	return 0;
}
