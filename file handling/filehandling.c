#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("hello.txt", "r");
    if (file == NULL) {
        printf("Error opening file");
        exit();
    }
    printf("Reading file content line by line:\n");
    char line[300];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    printf("\nFile read completed.\n");
    return 0;
}
