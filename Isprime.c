#include <stdio.h> 

int ISPRIME(int n){
  if(n < 2) {
  return 1;
  }

  for (int i = 2; i <= n; i++) {
    if(n % i == 0){
        return 0;
    }
    else{
      return 1;
  }
}
}
void main(){

  int start,end,range, prime;

  printf("Start: ");
  scanf("%d", &start);
  printf("End: ");
  scanf("%d", &end);

  range = (end - start);

  printf("The prime numbers between %d and %d are:\n", start, end);

  for(int i=start;i <= range; i++){
    if(ISPRIME(i) == 1){
        printf("%d\n", i);
    }
    else{
        continue;
    }
  }
}