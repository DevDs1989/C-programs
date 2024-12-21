#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("newfile.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    printf("Reading file content line by line:\n");
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    printf("\nFile read completed.\n");
    return 0;
}
