#include <stdio.h>
int power(int a, int b){
  for(int i = 0; i <= b; i++){
   a = a * a;
    return a;
   };
}

void main(){
  int a, b, c;
  int valid = 0;
  printf("\nEnter Side A of the triangle: ");
  scanf("%d",& a);
  printf("\nEnter Side B of the triangle: ");
  scanf("%d",& b);
  printf("\nEnter Side C of the triangle: ");
  scanf("%d",& c);
  
  if( a + b > c && a + c > b && c + b > a){
    valid = 1;
  }
  if(valid){
    if(power(a,2) + power(b,2) == power(c,2) || power(a,2) + power(c,2) == power(b,2) || power(c,2) + power(b,2) == power(a,2)){
      printf("It is a Right Angled Triangle");
    }
    else if( a == b == c){
      printf("\nIt is an Equilateral Triangle");
    }
    else if(a == b || a == c|| c == b){
      printf("It is an Isosceles Triangle");
      }
    else if( a != b != c){
      printf("It is a Scalene Triangle");
    }
 }
  else{
 printf("\nTriangle is not valid");
 }
}