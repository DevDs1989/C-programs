#include <stdio.h>

int main() {
    int numOfNumbers, i, num, positive = 0, negative = 0, zeroes = 0;
    char choice;

    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &numOfNumbers);

    for(i=1; i<=numOfNumbers; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num > 0) {
            positive++;
        } else if(num < 0) {
            negative++;
        } else {
            zeroes++;
        }
    }

    printf("\nTotal number of positive numbers: %d", positive);
    printf("\nTotal number of negative numbers: %d", negative);
    printf("\nTotal number of zeroes: %d", zeroes);

    return 0;
}
