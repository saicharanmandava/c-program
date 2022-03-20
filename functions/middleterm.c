#include<stdio.h>
int middle(int);
int main()
{
	int a,r;
	//enter a number;
	scanf("%d",&a);
	r=middle(a);
	printf("%d",r);
}
int middle(int a)
{
	int b[10],i=0;
	while(a>0)
	{
		b[i]=(a%10);
		a=a/10;
		i++;
	}
	return b[i/2];
}
