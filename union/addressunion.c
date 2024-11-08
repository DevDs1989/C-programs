#include <stdio.h>
#include <string.h>

typedef union{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[30];
    char state[30];
    int zip;
}Address;

int main() {
  
    Address add1;
    strcpy(add1.name, "Devesh");
    strcpy(add1.home_address, "Prayagraj, India");
    strcpy(add1.city, "Dehradun");
    strcpy(add1.state, "Uttarakhand");
    add1.zip = 12345;

    strcpy(add1.hostel_address, "UPES Hostel");
    printf("Present Address: %s\n", add1.hostel_address);

    return 0;
}
