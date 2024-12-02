#include <stdio.h>

float findAverage(int marks[], int n);

int main() {
    int marks[5], i;
    printf("Enter 5 marks: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    printf("Average Marks = %.2f\n", findAverage(marks, 5));
    return 0;
}

float findAverage(int marks[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}
