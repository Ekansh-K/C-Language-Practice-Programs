#include <stdio.h>
int add();

int main() {
    add();
    return 0;
}

int add(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}
