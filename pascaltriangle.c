#include <stdio.h>
int main() {
   int rows, c = 1, s, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (s = 1; s <= rows - i; s++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            c = 1;
         else
            c = c * (i - j + 1) / j;
         printf("%5d", c);
      }
      printf("\n");
   }
   return 0;
}