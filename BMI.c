#include <stdio.h>
int main() {
   float weight, height;
   printf("Enter your weight in kilograms: ");
   scanf("%f", &weight);
   printf("Enter your height in meters: ");
   scanf("%f", &height);
   
   float bmi = weight / (height * height);
   
   if(bmi < 15) {
      printf("You are anorexic.\n");
   } else if(bmi >= 15 && bmi <= 17.5) {
      printf("You are underweight.\n");
   } else if(bmi >= 17.6 && bmi <= 18.5) {
      printf("You are ideal.\n");
   } else if(bmi >= 18.6 && bmi <= 24.9) {
      printf("You are overweight.\n");
   } else if(bmi >= 25 && bmi <= 29.9) {
      printf("You are obese.\n");
   } else if(bmi >= 30 && bmi <= 39.9) {
      printf("You have morbidily obese.\n");
   } else {
      printf("You are in starvation.\n");
   }

   return 0;
}
