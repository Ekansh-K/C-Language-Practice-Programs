#include <stdio.h>
int decimalToBinary(int);

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary equivalent: ");
    decimalToBinary(n);
    printf("\n");
    return 0;
}

int decimalToBinary(int n) {
    if (n > 1)
        decimalToBinary(n / 2);
    printf("%d", n % 2);
}
