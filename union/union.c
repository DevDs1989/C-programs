#include <stdio.h>

typedef union{
  int age;
  int cgpa;
}student;

int main() {

student s1;
s1.age = 22;
printf("Age: %d\nCgpa: %d\n", s1.age, s1.cgpa);

s1.cgpa = 4;
printf("Age: %d\nCgpa: %d", s1.age, s1.cgpa);

}

