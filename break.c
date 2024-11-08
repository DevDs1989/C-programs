#include <stdio.h>

int main(){
  int x = 0;
  while(x < 11){
    x++;
    if(x == 10){
      printf("True");
      continue;
      printf("Checking Continue");
      break;
      printf("Checking Break");
    }
    else{
      break;
      printf("Not True");
    }
  }
}