#include <stdio.h>

void rowColSum(int arr[3][3], int rows, int cols);

int main() {
    int arr[3][3], i, j;
    printf("Enter elements of the matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    rowColSum(arr, 3, 3);
    return 0;
}

void rowColSum(int arr[3][3], int rows, int cols) {
    int i, j, rowSum, colSum;
    for (i = 0; i < rows; i++) {
        rowSum = 0;
        for (j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
    for (j = 0; j < cols; j++) {
        colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }
}