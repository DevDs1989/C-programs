#include <stdio.h>
int main() {
   int n,second_largest = 0;

   printf("Enter number of elements: ");
   scanf("%d",&n);
   int num[n];


   for(int i=0; i<n; i++){
      printf("Enter Element: ",i+1);
      scanf("%d", &num[i]);
   }

   for(int i=0; i<n-1; i++){
      for(int j=i+1; j<n; j++){
         if(num[i]>num[j]){
            int temp = num[i];
            num[i] = num[j];
            num[j] = temp;
         }
      }
   }

   for(int i=n-2; i>=0; i--){
      if(num[i]!=num[n-1]){
         second_largest = num[i];
         break;
      }
   }

   printf("The second largest number is: %d",second_largest);
   return 0;
}
