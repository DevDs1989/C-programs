// change diamensions of a matrix


#include <stdio.h>

int main() {
    int mat1[2][3] = { {1 , 2 , 3} , {10,9,8 }};
    int emptyMat[3][2];

for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
                emptyMat[j][i] = mat1[i][j];
        }
    }

    printf( "Matrix New dimension \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", emptyMat[i][j]);
        }
        printf("\n");
    }
}
