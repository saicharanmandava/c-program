#include<stdio.h>
struct person{
	char c[20];
	int n;
};
int main()
{
	int n,i;
	struct person s[20];
	//enter number of persons;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//enter name;
		scanf("%s",&s[i].c);
		//enter birth year;
		scanf("%d",&s[i].n);
	}
	for(i=0;i<n;i++)
	{
		//persons eligible for voting
		if((2022-s[i].n)>=18)
		{
			printf("%s\n",&s[i].c);
		}
	}
}




