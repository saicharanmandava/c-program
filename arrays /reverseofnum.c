#include<stdio.h>
int main()
{
	int a[10],i,n;
	//enter size of array;
	scanf("%d",&n);
	//enter elements to a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=(n-1);i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
