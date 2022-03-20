#include<stdio.h>
int main()
{
	char c[20];
	int i,l=0;
	//enter a string;
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='o'||c[i]=='u'||c[i]=='i'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
		l++;
	}
	//the number of vowels in given string are;
	printf("%d",l);
	return 0;
}
