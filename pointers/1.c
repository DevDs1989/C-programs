#include <stdio.h>

int main()
{
  int i = 10;
  float f = 3.14;
  char c = 'a';

  printf("Initial addresses:\n");
  printf("i: %p\tf: %p\tc: %p\n", &i, &f, &c);

  int *pi = &i;
  float *pf = &f;
  char *pc = &c;

  printf("\nAfter pointer initialization:\n");
  printf("pi: %p\tpf: %p\tpc: %p\n", pi, pf, pc);

  pi++;
  pf++;
  pc++;

  printf("\nAfter incrementing pointers:\n");
  printf("pi: %p\tpf: %p\tpc: %p\n", pi, pf, pc);

  pi--;
  pf--;
  pc--;

  printf("\nAfter decrementing pointers:\n");
  printf("pi: %p\tpf: %p\tpc: %p\n", pi, pf, pc);

  return 0;
}
