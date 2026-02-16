#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int a, b, choice;
    int (*operations[4])(int, int) = { add, subtract, multiply, divide };
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);
    if (choice < 1 || choice > 4) {
        printf("Invalid choice!\n");
        return 1;
    }
	int result = operations[choice - 1](a, b);
    printf("Result = %d\n", result);
    return 0;
}
