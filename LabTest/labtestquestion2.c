#include <stdio.h>

int main() {

  int a,b,c;

  printf("Enter the number of elements in Array1 :");
  scanf("%d",&a);
  int arr1[a];

  printf("Enter the elements of Array1:\n");
  for(int i=0; i < a; i++){
    scanf("%d", &arr1[i]);
  }
  printf("Enter the number of elements in Array2 :");
  scanf("%d",&b);
  int arr2[b];

  c = a + b;
  int res[c];

  printf("Enter the elements of Array2:\n");
  for(int i=0; i < b; i++){
    scanf("%d", &arr2[i]);
  }

  for(int i = 0; i < c; i++) {
    if (i < a) {
        res[i] = arr1[i];
    } else {
        res[i] = arr2[i - a];
    }
  }
 
 printf("Merged Array : ");
 for( int i=0; i<c; i++){
  printf("%d ", res[i]);
 }
}