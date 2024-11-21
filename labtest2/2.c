// struct for employee using date of joining id
// Write a c program to input detail of 10 employees and display the details of employ with the highest salary.
//make use of typedef or enum

#include <stdio.h>
#include <string.h>


typedef struct Employee{
int id;
  char name[50];
  int salary;
  char dateOfJoining[20];
}emp;


int main(){
    int temp, max, indexOfMax;
    emp employees[10];
    max = employees[0].salary;
    for( int i = 0 ; i < 10 ; i++){
        printf("\nInput Eployees number %d salary: " , i +  1);
        scanf("%d", &employees[i].salary);
    }


    for(int i = 0; i < 10; i++){
        if( max < employees[i].salary){
            max = employees[i].salary;
            indexOfMax = i;
        }
    }

    // employees[indexOfMax].name = "Random Name";
    strcpy(employees[indexOfMax].name, "Random Name" );
    employees[indexOfMax].id = 1234;
    // employees[indexOfMax].dateOfJoining = "20.11.2024";
    strcpy(employees[indexOfMax].dateOfJoining, "20.11.2024" );


    printf("Max salary Employee: %d\n", indexOfMax + 1);
    printf("Salary Employee: %d\n", employees[indexOfMax].salary);
    printf("Name: %c\n", employees[indexOfMax].name);
    printf("Date of Joining: %c\n", employees[indexOfMax].dateOfJoining);

}
