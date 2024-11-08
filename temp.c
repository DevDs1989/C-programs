#include <stdio.h>

int main() {
    float celsius, farenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    farenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Farenheit is: %.2f", farenheit);
    return 0;
}
