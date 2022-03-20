#include<stdio.h>
int prime(int);
int main()
{
	int a,r;
	//enter a number;
	scanf("%d",&a);
	r=prime(a);
	printf("%d",r);
}
int prime(int a)
{
	if(a==2)
	return 1;
	else if(a==1)
	return 1;
	else if(a%2==0)
	return 0;
	else
	return 0;
}
