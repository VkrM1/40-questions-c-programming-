// 28. Write a C program to find the length of a string without using library functions.

#include <stdio.h>
int main() {
    char str[] = "Programming";
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    printf("Length of the string = %d\n", i);
    return 0;
}
