#include <stdio.h>

int b = 0;

int FIBO(int a){

  if (a == 0) {
    return 0;
  } 
  else if (a == 1) {
    return 1;
  }
  else {
    return FIBO(a - 1) + FIBO(a - 2);
  }

}

int main() {

  int num;

  printf("Fibonacci Sequence\n");
  printf("Enter number: ");
  scanf("%d", &num);

  printf("The Fibonacci sequence is: \n");


  for(int i = 0; FIBO(i) <= num; i++){
    printf("%d\t", FIBO(i));
  }

  return 0;
}