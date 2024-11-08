#include <stdio.h>

int main()
{
  int m, n, p, q;

  printf("Enter number of rows (m) and columns (n) for matrix A: ");
  scanf("%d %d", &m, &n);

  printf("Enter number of rows (p) and columns (q) for matrix B: ");
  scanf("%d %d", &p, &q);

  if (n != p)
  {
    printf("Matrix A cannot be multiplied by Matrix B.\n");
    return 0;
  }
  else
  {
    int A[m][n], B[p][q], C[m][q];

    printf("Enter Matrix A:\n");
    for (int i = 0; i < m; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        printf("Enter Element(%d, %d): ", i + 1, j + 1);
        scanf("%d", &A[i][j]);
      }
    }

    printf("Enter Matrix B\n");
    for (int i = 0; i < p; ++i)
    {
      for (int j = 0; j < q; ++j)
      {
      printf("Enter Element(%d, %d): ", i + 1, j + 1);
        scanf("%d", &B[i][j]);
      }
    }
    for (int i = 0; i < m; ++i)
    {
      for (int j = 0; j < q; ++j)
      {
        C[i][j] = 0;
        for (int k = 0; k < n; ++k)
        {
          C[i][j] += A[i][k] * B[k][j];
        }
      }
    }
 printf("For Matrix A:\n");
    for (int i = 0; i < m; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        printf("%d ", A[i][j]);
      }
      printf("\n");
    }


    printf("Matrix B:\n");
    for (int i = 0; i < p; ++i)
    {
      for (int j = 0; j < q; ++j)
      {
        printf("%d ", B[i][j]);
      }
      printf("\n");
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; ++i)
    {
      for (int j = 0; j < q; ++j)
      {
        printf("%d ", C[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}
