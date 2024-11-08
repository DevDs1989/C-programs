#include <stdio.h>

void main(){
  int length, breadth;
  printf("Program to calculate Area and Perimeter of a Rectangle\n");
  printf("Enter the length of the rectangle: ");
  scanf("%d", & length);
  printf("Enter the breadth of the rectangle: ");
  scanf("%d", & breadth);
  printf("Area: %d\nPerimeter: %d", length*breadth, 2 * length+breadth);
}
