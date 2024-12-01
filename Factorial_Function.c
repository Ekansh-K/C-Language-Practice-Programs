#include <stdio.h>
int factorial(int);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", factorial(n));
    return 0;
}

int factorial(int n) {
    if (n == 0||n==1) {
        return 1;
    } 
    return n * factorial(n - 1);
}
