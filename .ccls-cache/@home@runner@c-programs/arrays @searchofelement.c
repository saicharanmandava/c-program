#include<stdio.h>
int main()
{
	int a[10],b,i;
	//enter the number;
	scanf("%d",&b);
	for(i=0;b>0;i++)
	{
		a[i]=b%2;
		b=b/2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
