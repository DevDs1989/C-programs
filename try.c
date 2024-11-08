#include <stdio.h>
int a = 50;
int try(){
  int a = 10;
}

void main(){
  try();
  printf("Main a = %d", a);
}