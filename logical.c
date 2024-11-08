#include <stdio.h>

void main(){
  int a,b,c;
  printf("Enter 1st number: ");
  scanf("%d", & a);
  printf("Enter 2nd number: ");
  scanf("%d", & b);
  printf("Enter 3st number: ");
  scanf("%d", & c);
  if( a == b && c == b){
    printf("All the numbers are equal!");
  };
  if( a > b || a > c){
  printf("1st number is greater than atleast 2nd or 3rd number!");
  };
  if(!c)
  printf("3rd number is zero!");
}
