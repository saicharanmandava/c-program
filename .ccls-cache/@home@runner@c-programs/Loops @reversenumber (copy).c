#include<stdio.h>
int main()
{
	int a,sum=0;
	//enter a number;
	scanf("%d",&a);
	while(a>0)
	{
		sum=sum*10+(a%10);
		a=a/10;
	}
	printf("%d",sum);
}
