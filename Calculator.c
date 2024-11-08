#include <stdio.h>

int main(){
  
  int operation,num1,num2;
  printf("Basic Calculator!!\n");
  printf("0 for Addition\n1 for Subtraction\n2 for Multiplication\n3 for division\nEnter the operation you want to perform: ");
  scanf("%d", &operation );
  if(operation == 0 || operation == 1 || operation == 2 || operation == 3){
  printf("Enter first number:");
  scanf("%d", & num1);
  printf("Enter second number:");
  scanf("%d", & num2);

  switch(operation){
    case 0:
    printf("Addition\nResult: %d", num1 + num2);
    break;
    case 1:
    printf("Subtraction\nResult: %d", num1 - num2);
    break;
    case 2:
    printf("Multiplication\nResult: %d", num1 * num2);
    break;
    case 3:
    printf("Division\nResult: %d", num1 / num2);
    break;
  }
  }
  else{
    printf("Please follow the guidelines!");
  }
  return 0;
  }
