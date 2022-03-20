#include<stdio.h>
int main()
{
	int max,a[10],i,n;
	//enter size of array;
	scanf("%d",&n);
	//enter elements to an array;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	//maximum in an array is
	printf("%d",max);
}
