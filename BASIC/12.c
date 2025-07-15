// 12. Write a C program to find the sum of digits of a number.

#include <stdio.h>
int main(){
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {   //sum of digit calculate kori sum variable t store kora hoise
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
