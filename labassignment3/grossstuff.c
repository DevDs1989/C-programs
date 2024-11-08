#include <stdio.h>
#include <string.h>


typedef struct Employee{
  char name[50];
  int age; 
  int basicpay;
}emp;


int main() {

  emp employee[100];

  for(int i=0; i<100; i++){
    strcpy(employee[i].name, "Employee");
    employee[i].age = 20;
    employee[i].basicpay = 100 + (i*10);
  }


 for(int i=0; i<100; i++){
  printf("Employee name: %s\n", employee[i].name);
  printf("Age: %d\n",employee[i].age);
  printf("Gross Salary: %d\n\n",employee[i].basicpay + employee[1].basicpay * 52/100);
 }

}