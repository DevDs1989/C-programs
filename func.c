#include <stdio.h>

int add(int num1, int num2){
return num1 + num2;
}
int sub(int num1, int num2){
    return num1 - num2;
}
int mul(int num1, int num2){
    return num1 * num2;
}
int div(int num1, int num2){
    return num1 / num2;
}

int mod(int num1, int num2){
    return num1 % num2;
}

int main(){
int n1,n2,res,operation;
    printf("Basic Calculator!!\n");
  printf("0 for Addition\n1 for Subtraction\n2 for Multiplication\n3 for division\n4 for Modulo\nEnter the operation you want to perform: ");
  scanf("%d", &operation );
  if(operation == 0 || operation == 1 || operation == 2 || operation == 3 || operation == 4){
  printf("Enter first number:");
  scanf("%d", & n1);
  printf("Enter second number:");
  scanf("%d", & n2);

  switch(operation){
    case 0:
    // res = add(n1,n2);
    printf("Addition\nResult: %d",add(n1,n2));
    break;
    case 1:
    // res = sub(n1,n2);
    printf("Subtraction\nResult: %d",sub(n1,n2));
    break;
    case 2:
    // res = mul(n1,n2);
    printf("Multiplication\nResult: %d", mul(n1,n2));
    break;
    case 3:
    if(n2 != 0){
    // res = div(n1,n2);
    printf("Division\nResult: %d", div(n1,n2));}
    else{
        printf("Cannot Divide by Zero");
    }
    break;
    case 4:
    // res = mod(n1,n2);
    printf("Modulo\nResult: %d", mod(n1,n2));
  }
  }
  }