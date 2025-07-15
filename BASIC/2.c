//2.	Write a C program to input two numbers and print their sum.

#include <stdio.h>

int main() {
    int a, b, sum;

    // We input two nmbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // We calculate sum
    sum = a + b;

    // Print the result
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

