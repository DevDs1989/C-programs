#include <stdio.h>
// Recursive function to calculate factorial
unsigned long long int FACT_REC(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * FACT_REC(n-1);
  }
}
// Non-recursive function to calculate factorial
unsigned long long int FACT_NON_REC(int n) {
  unsigned long long int fact = 1;
  for (int i = 2; i <= n; ++i) {
    fact *= i;
  }
  return fact;
}
// Function to calculate binomial coefficient
unsigned long long int BINOMIAL(int n, int r) {
  if (r > n) {
    return 0;
  } else if (r == 0 || r == n) {
    return 1;
  } else {
    // Using the recursive function to calculate factorial
    unsigned long long int fact_n = FACT_REC(n);
    unsigned long long int fact_r = FACT_REC(r);
    unsigned long long int fact_n_minus_r = FACT_REC(n-r);
    // Calculating the binomial coefficient using the factorial
    return fact_n / (fact_r * fact_n_minus_r);
  }
}
int main() {
  printf("Results for different of n and r:\n");
  for (int n = 0; n <= 10; ++n) {
    for (int r = 0; r <= n; ++r) {
      unsigned long long int binomial = BINOMIAL(n, r);
      printf("BINOMIAL(%d, %d) = %llu\t", n, r, binomial);
    }
    printf("\n");
  }
  return 0;
}
