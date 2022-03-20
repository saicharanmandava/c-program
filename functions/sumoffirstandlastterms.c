#include<stdio.h>
int sumofsqroffirstlastdigit(int);
int main()
{
	int a,r;
	//enter the number;
	scanf("%d",&a);
	r=sumofsqroffirstlastdigit(a);
	printf("%d",r);
}
int sumofsqroffirstlastdigit(int a)
{
	int b[10],i=0,sum=0;
	while(a>0)
	{
		b[i]=(a%10)*(a%10);
		a=a/10;
		i++;
	}
	sum=b[0]+b[i-1];
	return sum;
}
