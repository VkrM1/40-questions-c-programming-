// 10. Write a C program to reverse a given number.

#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder= num % 10; //taking th reminder
        reversed= reversed * 10 + remainder;
        num /= 10; //removing last digit
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}
