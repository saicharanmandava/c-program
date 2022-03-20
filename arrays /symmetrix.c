#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,j,m,n,count=0;
	//enter size of a;
	scanf("%d%d",&m,&n);
	//enter elements to a;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	// a matrix is symmetrical if its transpose is equal to itself;
	   for(i=0;i<m;i++)
     {
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	 }
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=b[i][j])
			count++;
			break;
		}
	}
	if(count==0)
	printf("symmetric");
	else
	printf("not symmetric");
}
