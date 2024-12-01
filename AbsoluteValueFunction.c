#include <stdio.h>
int absolute(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Absolute value = %d\n", absolute(num));
    return 0;
}

int absolute(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}
