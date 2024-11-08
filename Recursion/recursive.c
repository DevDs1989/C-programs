#include <stdio.h>

int sum(int x){
  if (x > 0){
    return x + sum(x-1);
  } else {
    return 0;
  }
}


int main() {
int a = 10, s;
s = sum(a);
printf("%d\n",sum(s));
return 0;
}
