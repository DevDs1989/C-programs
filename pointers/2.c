#include <stdio.h>

void modify_value(int *ptr)
{
  *ptr = *ptr + 1;
}

int main()
{
  int num = 5;
  printf("Before: %d\n", num);
  modify_value(&num);
  printf("After: %d\n", num);
  return 0;
}
