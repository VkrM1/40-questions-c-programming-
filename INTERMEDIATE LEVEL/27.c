// 27. Write a C program to copy one string to another string.

#include <stdio.h>
int main() {
    char str1[] = "Hello, world!";
    char str2[50];
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);
    return 0;
}
