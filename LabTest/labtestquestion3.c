#include <stdio.h>

int main() {

  int n,cons = 0,vows = 0;
  printf("Enter number of elements in the array: ");
  scanf("%d",&n);
  char str[n];

  printf("Enter the string:\n");
  for(int i = 1; i < n; i++){
    scanf(" %c ", &str[i] );
  }
  for(int i = 0; i < n; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        vows++;
    }else{
        cons++;
    }
  }

    printf("Number of vowels: %d\n", vows);
    printf("Number of consonants: %d\n", cons);
}