#include <stdio.h>


typedef struct{
  int age;
  char name[100];
  int id;
} stu;

int main() {

  stu st1 = {20, "Devesh", 17127};
  printf("Name: %s\nAge: %d\nID: 5900%d\n\n", st1.name, st1.age, st1.id);

  stu st2 = {18, "Harshit", 15159};
  printf("Name: %s\nAge: %d\nID: 5900%d\n\n", st2.name, st2.age, st2.id);
   
   
}


