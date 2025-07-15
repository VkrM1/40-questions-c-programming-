// 4. Write a C program to swap two numbers using a temporary variable

#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    temp = num1; // swaping is done
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
