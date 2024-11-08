#include <stdio.h>

void main(){
  float C, F;
  printf("Celcius to Farenhiet\n");
  printf("Temprature in C: ");
  scanf("%f", & C);
  F = 32 + (C * 9/5);
  printf("Temprature in F: %0.2f\n", F);

}