#include <stdio.h>

typedef struct Student{
  int age;
  float cgpa;
} std;

std info(){
  std s;
  printf("Enter your age: ");
  scanf("%d", &s.age);
  printf("Enter your CGPA: ");
  scanf("%f", &s.cgpa);
  return s;
}

int main() {


  std s1;
  s1 = info();

  printf("\nAge: %d\nCGPA: %0.2f\n", s1.age, s1.cgpa);
  return 0;

  
}
