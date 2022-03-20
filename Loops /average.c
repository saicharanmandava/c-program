#include<stdio.h>
int main()
{
	int a[10],i,n,sum=0,average;
	//enter no of integers;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	average=sum/n;
	printf("%d",average);
}
