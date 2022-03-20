 #include<stdio.h>
char check(char);
int main()
{
	char ch;
	//enter a character;
	scanf("%c",&ch);
	check(ch);
}
char check(char ch)
{
	if(ch>=65&&ch<=90)
	printf("U");
	else
	printf("L");
}
