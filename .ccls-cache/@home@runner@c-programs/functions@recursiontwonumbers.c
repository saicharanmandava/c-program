#include<stdio.h>
int product(int ,int);
int main()
{
	int a,b,r;
	//enter 2 numbers;
	scanf("%d%d",&a,&b);
	r=product(a,b);
	printf("%d",r);
}
int product(int a,int b)
{
	if(a<b)
	return product(b,a);
	else if(b!=0)
	return a+product(a,b-1);
	else
	return 0;
}
