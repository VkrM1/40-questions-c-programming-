#include <stdio.h>

int main() {
    int a, b, i, gcd = 1, lcm;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Find GCD using brute-force method
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    // Calculate LCM using the formula: (a * b) / GCD
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}

