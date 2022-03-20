#include<stdio.h>
#include<ctype.h>
int main()
{
	char c[20],t[20];
	int i;
	//enter a lower string character;
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	{
		t[i]=toupper(c[i]);
	}
	t[i]='\0';
	printf("%s",t);
	return 0;
}
