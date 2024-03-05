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
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	int r1,r2;
	printf("enter the rows to be interchanged : ");
	scanf("%d  %d",&r1,&r2);
	int temp,k;
	for(k=0;k<m;k++)	
	{
	temp=a[r1][k];
	a[r1][k]=a[r2][k];
	a[r2][k]=temp;
	}
	printf("the matrix after interchanging row %d with row %d is :\n");
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
