#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("hello.txt", "w");
    if (file == NULL) {
        printf("Error opening file");
        exit();
    }
    fprintf(file, "New text in file");
    fclose(file);
    printf("File created and text written successfully.\n");
    return 0;
}
