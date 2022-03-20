#include<stdio.h>
struct book{
	char title[20],author[20];
	int price;
};
int main()
{
	struct book s[20];
	int n,i;
	//enter the value of n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//enter name of book;
		scanf("%s",&s[i].title);
		//enter author name;
		scanf("%s",&s[i].author);
		//enter price of the book;
		scanf("%d",&s[i].price);
	}
	//the titles and authors of books whose price is greater than 500 are;
	for(i=0;i<n;i++)
	{
		if(s[i].price>500)
		{
			printf("%s",s[i].title);
			printf("\n%s",s[i].author);
		}
	}
}
