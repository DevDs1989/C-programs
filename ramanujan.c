#include <stdio.h>
int main(){
  int L = 20;
  int i, j, k, l;
  for (i = 1; i <= L; i++)
  {
    for (j = i; j <= L; j++)
    {
      int sum1 = i * i * i + j * j * j;
      for (k = 1; k <= L; k++)
      {
        for (l = k; l <= L; l++)
        {
          int sum2 = k * k * k + l * l * l;
              if (sum1 == sum2 && sum1 != 0 && (i != k || j != l))
          {
            printf("Ramanujan Number: %d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, i, j, k, l);
          }
        }
      }
    }
  }

  return 0;
}
