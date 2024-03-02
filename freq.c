#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int i,max,f[200],ascii;
	gets(a);
	for(i=0;i<200;i++)
	{
		f[i]=0;
	}
	i=0;
	while(a[i]!='\0')
	{
		ascii=(int)a[i];
		f[ascii]+=1;
		i++;
	}
	max=0;
	for(i=0;i<200;i++)
	{
		if(f[i]>f[max])
		max=i;
	}
	printf("maximum occuring character is %d : %d",max,f[max]);
	return 0;
}
