#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,r,c;
	printf("Rows :");
	scanf("%d",&r);
	printf("Columns :");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("1st Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("2nd Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	        sum[i][j]=a[i][j]+b[i][j];
     	}
    }
    printf("Sum of 1st and 2nd matix : \n");
   	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	        printf("%d\t",sum[i][j]);
     	}
     	printf("\n");
    }
	return 0;
}
