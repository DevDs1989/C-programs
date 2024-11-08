#include <stdio.h>

#define PI 3.14159

int main() {
  float radius,area,circum;
  printf("Enter Radius: ");
  scanf("%f",&radius);

  area = PI*radius*radius;
  circum = 2*PI*radius;
  
  printf("Area: %0.2f\nCircumference: %0.2f",area, circum);

    return 0;
}
