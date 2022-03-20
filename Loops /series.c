#include<stdio.h>
int main()
{
	int a,i=1;
	float sum=0;
	//enter a number;
	scanf("%d",&a);
	while(i<(a+1))
	{
		sum=sum+(float)i/(i+1);
		i++;
	}
	printf("%f",sum);
}
