#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("hello.txt", "r");
    if (file == NULL) {
        printf("Error opening file");
        exit();
    }
    printf("Reading file content character by character:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
