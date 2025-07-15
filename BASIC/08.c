// 8. Find the factorial of a given number
#include <stdio.h>

int main() {
    int num, i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        fact *= i;
    printf("Factorial = %d\n", fact);
    return 0;
}
