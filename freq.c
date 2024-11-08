#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the number to find the frequency: ");
    scanf("%d", &target);

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    printf("Frequency of %d in the list: %d\n", target, count);

    return 0;
}
