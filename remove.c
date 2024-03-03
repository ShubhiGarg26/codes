#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int i,j;
	printf("enter the string :\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		while(!(a[i]>='a' && a[i]<='z') && !(a[i] >= 'A' && a[i] <= 'Z') && !(a[i] == '\0'))
		{
			for(j=i;a[j]!='\0';j++)
			a[j]=a[j+1];
		}
	}
	printf("the string after removing all the characters except alphabets is :\n");
	puts(a);
	return 0;
}


