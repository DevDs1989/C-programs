#include <stdio.h>

// int main(){
  // int a;
  // printf("Enter 1 or 2 or 3!\n");
    // scanf("%d", & a);
// 
  // switch(a){
    // case 1:
    // a == 1;
    // printf("HEWWO!");
    // break;
    // case 2:
    // a == 2; 
    // printf("HIII :3");
    // break;
    // case 3:
    // a == 3;
    // printf(":3");
    // break;
    // default:
    // printf("cant follow a simple rule can");
  // }
  // return 0;
// }

int main(){
  char a;
  printf("Enter a or b or c!\n");
    scanf("%s", & a);

  switch(a){
    case 'a':
    // a == 1;
    printf("HEWWO!");
    break;
    case 'b':
    // a == 2; 
    printf("HIII :3");
    break;
    case 'c':
    // a == 3;
    printf(":3");
    break;
    default:
    printf("cant follow a simple rule can");
  }

}
