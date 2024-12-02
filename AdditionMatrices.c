#include <stdio.h>

void addMatrices(int a[3][3], int b[3][3], int result[3][3], int rows, int cols);

int main() {
    int a[3][3], b[3][3], result[3][3], i, j;
    printf("Enter elements of first matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    addMatrices(a, b, result, 3, 3);
    printf("Sum of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void addMatrices(int a[3][3], int b[3][3], int result[3][3], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
