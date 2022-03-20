#include<stdio.h>
int main()
{
	int a,t,sum=0;
	//enter a number;
	scanf("%d",&a);
	while(a>0)
	{
		if((a%10)%2==0)
		sum=sum+(a%10);
		a=a/10;
	}
	printf("%d",sum);
}
