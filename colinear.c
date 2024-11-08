#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of point 1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of point 2: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter the coordinates of point 3: ");
    scanf("%d %d", &x3, &y3);

    int area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

    if (area == 0) {
        printf("The points are co-linear.\n");
    } else {
        printf("The points are not co-linear.\n");
    }

    return 0;
}
