#include<stdio.h>
int sum3(int);
int main()
{
	int a,r;
	//enter a number;
	scanf("%d",&a);
	r=sum3(a);
	printf("%d",r);
}
int sum3(int a)
{
	int i=0,sum=0;
	while(a>0&&i<3)
	{
		sum=sum+(a%10);
		a=a/10;
		i++;
	}
	return sum;
}
