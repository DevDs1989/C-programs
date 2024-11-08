#include <stdio.h>

int GCD(int a, int b) {

  if (b == 0){
    return a;
  }
  else{
    return GCD(b, a % b);
  }
}

int main() {

  int num1,num2;

  printf("GCD Calculator\n");
  printf("Enter number 1: ");
  scanf("%d", &num1);

  printf("Enter number 2: ");
  scanf("%d", &num2);

  printf("The GCD is: %d\n",GCD(num1, num2));

  return 0;
}