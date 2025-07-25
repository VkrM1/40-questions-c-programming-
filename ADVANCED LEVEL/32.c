// 32. Write a C program to use recursion to find the factorial of a number.

#include <stdio.h>
int factorial(int n) {
    if (n == 0){
     return 1;
    }else{
    return n * factorial(n - 1); // recursive step
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", factorial(n));
    return 0;
}
