// 34. Write a C program to demonstrate pointer arithmetic.

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;  // pointer points to start of array
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}
