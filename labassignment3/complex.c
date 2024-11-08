#include <stdio.h>

typedef struct{
  int real;
  int nreal;
}img;

img add(img s, img t){
  img resultAdd;
  resultAdd.real = s.real + t.real;
  resultAdd.nreal = s.nreal + t.nreal;
  return resultAdd;
}

img sub(img s, img t){
  img resultSub;
  resultSub.real = s.real - t.real;
  resultSub.nreal = s.nreal - t.nreal;
  return resultSub;
}

int main(){

 char choice;
 img a,b;

  printf("Enter the real and imaginary part of A: ");
  scanf("%d %d",&a.real, &a.nreal);
  printf("Entered complex number is: %d + %di\n", a.real, a.nreal);

  printf("\nEnter the real and imaginary part of B: ");
  scanf("%d %d",&b.real, &b.nreal);
  printf("Entered complex number is: %d + %di\n", b.real, b.nreal);

  printf("A for Additon\t\tS for Subtraction\n");
  scanf(" %c", &choice);

  if(choice == 'A' || choice == 'a'){
    img result = add(a,b);
    printf("Result: %d + %di",result.real, result.nreal);
    }
  else if(choice == 'S' || choice == 's'){
    img result = sub(a,b);
    printf("Result: %d + %di",result.real, result.nreal);
    }
  else{
    printf("Invalid Choice");
    return 0;
  }
}
