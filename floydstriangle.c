#include<stdio.h>
int main() {
int n,i,k,num=1;
printf("enter the number of rows of floyds triangle \n:");
scanf("%d" , &n);
for (i=1;i<=n;i++)
{
 for(k=1;k<=i;k++)
 {
   printf("%d ", num);
   num++;
 } 
 printf("\n");
}
return 0;
}