#include<stdio.h>
int main()
{
	int a,r;
	//enter a number;
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		if(r!=0)
		{a=a/10;
		continue;
	}
		else
		printf("Duck number");
		break;
}
}
