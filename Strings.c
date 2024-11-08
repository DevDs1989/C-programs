#include <stdio.h>

void main(){
  char name[10]; int age;
  printf("Enter your name: ");
  scanf("%s", &name);
  printf("Enter your age: ");
  scanf("%d", &age);
  if (age == 1)
    printf("Hello %s!! \nYou are %d year old!!!", name, age);
  else
    printf("Hello %s!! \nYou are %s years old!!!", name, age);
}
