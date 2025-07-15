// 35. Write a C program to swap two numbers using pointers.

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;  // store value pointed by a
    *a = *b;      // assign value pointed by b into a
    *b = temp;       // assign stored value into b
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
