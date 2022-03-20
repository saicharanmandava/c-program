#include<stdio.h>
int main()
{
	int n,a[20],ec=0,oc=0,i;
	//enter size of array;
	scanf("%d",&n);
	//enter elements to an array;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		ec++;
		else
		oc++;
	}
	printf("even count=%d",ec);
	printf("\nodd count=%d",oc);
	return 0;
}
