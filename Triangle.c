#include <stdio.h>

int main(){
  // int num;
  // scanf("%d", & num);
  for(int i = 0; i < 10; i++){
    for(int j = 0;j < 10 ;j++){
      if(j <= i){
        printf("*");
        }
    }
    printf("\n");
  }
return 0;
}