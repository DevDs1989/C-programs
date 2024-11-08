#include <stdio.h>

// int main(){
  // int number;
  // printf("Enter your Number:");
    // scanf("%d", & number);
  // printf("Your Number is: %d", number);
// }

// void main(){
  // int numOne, numTwo, sum;
  // printf("Additon Program \n");
  // printf("Enter the first number: \n");
  // scanf("%d", & numOne);
  // printf("Enter the second number: \n");
  // scanf("%d", & numTwo);
  // sum = numOne + numTwo;
  // printf("The sum is: \n%d\n", sum);
// }

// void main(){
//   char a, b;
//   printf("Enter two characters: ");
//   scanf("%c", & a);
//   printf("Entered character is: %c", a);
// }


void main(){
  char initial; int age;
  printf("Enter your Inital and Age (in this order): ");
  scanf("%c %d", &initial, &age);
  printf("\n Your Name starts with %c \n You are %d years old", initial, age);

}
