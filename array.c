#include <stdio.h>

// int main(){
  // int arr[] = {1, 2 ,3 ,4 ,5, 6, 7, 8};
  // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    // printf("%d\n", arr[i]);
  // };
  // return 0;
// }
// 

int main(){
  int a[20],r,i,j;
  printf("Enter the range: ");
  scanf("%d", &r);
  for(i = 0; i<= r; i++){
    printf("Enter the Number: ");
    scanf("%d", &a[i]);
  }
  for(i = 0; i <= r; i++){
    j = i + 1;
    printf("%d:\t %d\n",j,a[i] );
  }
}