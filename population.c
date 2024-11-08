#include <stdio.h>
int main(){
    int population = 100000;
    double increase_rate = 0.10;
    for(int i=1; i<=10; i++) {
        population += population * increase_rate;
        printf("Population at the end of year %d: %d\n", i, population);
    }

    return 0;
}
