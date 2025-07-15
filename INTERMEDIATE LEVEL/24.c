// 24. Write a C program to insert an element in an array.

#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;
    int val = 99;
    int i;

    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
