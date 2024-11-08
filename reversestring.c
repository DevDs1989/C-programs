#include <stdio.h>
#include <string.h>

void REVERSE(char* str) {

  for (int i = 0; i < strlen(str) / 2; i++) {
    char temp = str[i];
    str[i] = str [strlen(str) - 1 - i];
    str[strlen(str) - 1 - i] = temp;
  }
}

int main(){
  char string[100];
  printf("Enter a string: ");
  scanf("%s", string);
  
  REVERSE(string);
  printf("Reversed String is: %s\n", string);
  return 0;
}
