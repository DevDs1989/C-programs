#include <stdio.h>

int main() {

  FILE* file; 
  file = fopen("hello.txt", "r");
  if(file = NULL){
    printf("no such file");
  }
  else{
    printf("file opened");
  }

}