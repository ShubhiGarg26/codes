#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100],temp;
	gets(a);
	int l,i,j;
	l=strlen(a);
	for(i=0;a[i]!=0;i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(!(a[i]>='a'&& a[i]<='z')&&!(a[i]>='A'&&a[i]<='Z')&&(a[i]!='\0'))
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%s\n",a);
	for(i=l-1,j=0;i>0,j<l;i--,j++)
	{
		b[j]=a[i];
	}
	b[j]='\0';
	int k=0;
    for(i=0;b[i];i++)
    {
     	b[i]=b[i+k];
 
     	
     	if(b[i]==' '|| b[i]=='\t')
     	{
		  k++;
		  i--;
	    }
	}
     k=0;
	for(i=0;a[i];i++)
    {
     	a[i]=a[i+k];
 
     	
     	if(a[i]==' '|| a[i]=='\t')
     	{
		  k++;
		  i--;
	    }
    }
	printf("%s\n",b);
	int f=strcmp(a,b);
	printf("%d",f);
	if(f)
	printf("\nthe string is not palindrome");
	else
	printf("\nthe string is palindrome");
	return 0;
}
