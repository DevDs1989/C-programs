#include <stdio.h>
int main() {
   int n, pos = 0, neg = 0, odd = 0, even = 0;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   int arr[n];
   for(int i = 0; i < n; i++) {
      printf("Enter Number: ", n);
      scanf("%d", &arr[i]);
   }

   for(int i = 0; i < n; i++) {
      if(arr[i] > 0) {
         pos++;
      }
      else if(arr[i] < 0) {
         neg++;
      }
      if(arr[i] % 2 != 0) {
         odd++;
      }
      else if( arr[i] % 2 == 0) {
         even++;
      }
   }
   printf("Number of positive numbers: %d\n", pos);
   printf("Number of negative numbers: %d\n", neg);
   printf("Number of odd numbers: %d\n", odd);
   printf("Number of even numbers: %d\n", even);
   return 0;
}
