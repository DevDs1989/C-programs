#include <stdio.h>

void main(){
  int input1, input2;
  printf("Performing all Mathematical Operations in C\n");
  printf("Enter your 1st number: ");
  scanf("%d", & input1);
  printf("Enter your 2nd number: ");
  scanf("%d", & input2);
  printf("Addition: %d\n", input1+input2);
  printf("Subtraction: %d\n", input1-input2);
  printf("Multiplication: %d\n", input1*input2);
  printf("Division: %d\n", input1/input2);
  printf("Modulo: %d\n", input1%input2);
}