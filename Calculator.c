#include <stdio.h>
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(choice!=5){
    printf("Press the coressponding number to the Required Action : \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit \nChoose an option: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("Result = %d\n", add(a, b)); break;
        case 2: printf("Result = %d\n", subtract(a, b)); break;
        case 3: printf("Result = %d\n", multiply(a, b)); break;
        case 4: 
            if (b != 0)
                printf("Result = %d\n", divide(a, b));
            else
                printf("Division by zero error!\n");
            break;
        case 5: break;
        default: printf("Invalid choice\n");
    }
    return 0;
    }
}

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
