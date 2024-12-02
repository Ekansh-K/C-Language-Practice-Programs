#include <stdio.h>

int findMax(int arr[], int n);

int main() {
    int arr[5], i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Maximum Value = %d\n", findMax(arr, 5));
    return 0;
}

int findMax(int arr[], int n) {
    int max = arr[0], i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
