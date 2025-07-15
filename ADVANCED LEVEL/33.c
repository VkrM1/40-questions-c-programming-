// 33. Write a C program to use recursion to find the nth Fibonacci number.

#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fib(int n) {
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci number at position %d = %d\n", n, fib(n));
    }

    return 0;
}

