#include <stdio.h>

int FACTORIAL(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * FACTORIAL(n - 1);
  }
}

int main() {
  int n, r;
  printf("Binomial = nCr\n");

  printf("Enter N: ");
  scanf("%d", &n);

  for (r = 0; r <= n; r++) {
    int C = FACTORIAL(n) / (FACTORIAL(r) * FACTORIAL(n - r));
    printf("%dC%d: %d\n", n, r, C);
  }

  return 0;
}
