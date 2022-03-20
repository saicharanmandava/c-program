#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	//enter size of matrix;
	scanf("%d%d",&m,&n);
	//enter elements to a;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//the matrix a is;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
