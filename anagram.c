#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100],temp;
	int i,j,l1,l2;
	printf("enter first string :\n");
	gets(a);
	printf("enter second string :\n");
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
	{
		printf("the string is not anagram");
		return 0;
	}
	char * str1=strlwr(a);
	char * str2=strlwr(b);
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=i+1;str1[j]!='\0';j++)
		{
			if((int)str1[i]>(int)str1[j])
			{
				temp=str1[j];
				str1[j]=str1[i];
				str1[i]=temp;
			}
		}
	}
	for(i=0;str2[i]!='\0';i++)
	{
		for(j=i+1;str2[j]!='\0';j++)
		{
			if((int)str2[i]>(int)str2[j])
			{
			temp=str2[j];
			str2[j]=str2[i];
			str2[i]=temp;
			}
		}
	}
	int c=0;
	for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
	{
		if(str1[i]==str2[j])
		c=0;
		else
		c++;
	}
	if(c)
	printf("the strings are not anagram");
	else
	printf("the strings are anagram");
	return 0;
}
