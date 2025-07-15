// 31. Write a C program to implement a simple calculator using switch-case.
#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // note space before %c to skip newline

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
