#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[50];
	int i,l1,l2;
	printf("enter first string :\n");
	gets(a);
	printf("enter second string :\n");
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	printf("the length of the two strings is same");
	else
	printf("the length of the two strings is not same");
	return 0;
}
