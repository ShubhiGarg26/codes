#include <stdio.h>
int main()
{
	int n,i,j,m;
	printf("enter the size of rows and columns of the matrix : ");
	scanf("%d  %d",&n,&m);
	int a[n][m];
	printf("enter the elements of the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		if(i<=j)
		printf("%d ",a[i][j]);	
		else
		printf("  ");
		}
		printf("\n");
	}
	return 0;
}
