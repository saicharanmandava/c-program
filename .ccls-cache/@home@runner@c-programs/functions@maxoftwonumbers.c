#include<stdio.h>
int max(int ,int);
int main()
{
	int r,a,b;
	//enter 2 values;
	scanf("%d%d",&a,&b);
	r=max(a,b);
	printf("%d",r);
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
