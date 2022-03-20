#include<stdio.h>
struct Emp{
	char name[20];
	int emp_id,j_year,salary;
};
int main()
{
	struct Emp s[20];
	int n,i;
	//enter the number of employees;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//enter the name of employee;
		scanf("%s",&s[i].name);
		//enter the employee id;
		scanf("%d",&s[i].emp_id);
		//enter the joining year;
		scanf("%d",&s[i].j_year);
		//enter the salary;
		scanf("%d",&s[i].salary);
	}
	//add the specified bonus given in the question;
	for(i=0;i<n;i++)
	{
		if((2022-s[i].j_year)>=10)
		{
			printf("%s\n",s[i].name);
			printf("%d\n",s[i].emp_id);
			printf("%d\n",s[i].j_year);
			printf("%d\n",s[i].salary+5000);
		}
		printf("\n");
	}
}
