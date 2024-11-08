#include <stdio.h>

typedef struct {
  char name[50];
  int age;
  int salary;
} emp;

int main() {

emp employee[20] = {{"Devesh", 20 , 100},
  {"Shreyansh", 18 , 100},
  {"Dev" ,19 , 100}};



  for(int i=0;  i<3; i++) {
    printf("Employee %d\n", i+1);
    printf("Name: %s\n", employee[i].name);
    printf("Age: %d\n", employee[i].age);
    printf("Salary: %d\n", employee[i].salary);
    printf("\n");
  };

}
