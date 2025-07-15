// 29. Write a C program to check whether a string is a palindrome.

#include <stdio.h>
int main() {
    char str[] = "madam";
    int i = 0, j, isPalindrome = 1;

    for (j = 0; str[j] != '\0'; j++);

    j--; // last character index

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
