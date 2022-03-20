#include<stdio.h>
struct student
{
	char c[20];
	int rollno;
	int m[5];
};
int main()
{
	struct student s;
	int total=0,i;
	float average;
	//enter name of the student;
	scanf("%s",s.c);
	//enter rollno;
	scanf("%d",&s.rollno);
	//enter marks of 5 subjects;
	for(i=0;i<5;i++)
	{
		scanf("%d",&s.m[i]);
		total=total+s.m[i];
	}
	printf(//total is
	"%d\n",total);
	average=(float)total/5;
	printf(//average is
	"%f",average);
	return 0;
}
