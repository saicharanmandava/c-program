#include<stdio.h>
int fact(int);
int main()
{
	int a[10],b[10],i,n,r;
	//enter size of a;
	scanf("%d",&n);
	//enter elements to a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		r=a[i];
		b[i]=fact(r);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
}
int fact(int r)
{
	if(r>=1)
	return r*fact(r-1);
	else
	return 1;
}
