#include <stdio.h>
int main() {
   int rows, pow = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            pow = 1;
         else
            pow = pow * (i - j + 1) / j;
         printf("%4d", pow);
      }
      printf("\n");
   }
   return 0;
}
