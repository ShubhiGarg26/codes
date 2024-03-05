#include <stdio.h>
int main()
{
	int n,i,j,m;
	printf("enter the size of rows and columns of the matrix : ");
	scanf("%d  %d",&n,&m);
	if(n!=m)
	{
		printf("an identity matrix is a square matrix therefore number of rows and columns should be equal\n so please give a valid input to check\n");
		return 0;
	}
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
			if(i==j)
			{
				if(a[i][j]==1)
				continue;
				else 
				{
					printf("the matrix is not an identity matrix");
					return 0;
				}
			}
			if(i!=j)
			{
				if(a[i][j]==0)
				{
					continue;
				}
				else
				{
					printf("the matrix is not an identity matrix");
					return 0;
				}
			}
		}
	}
	printf("the matrix is an identity matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

