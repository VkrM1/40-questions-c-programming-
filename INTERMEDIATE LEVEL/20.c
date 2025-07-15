// 20. Write a C program to sort an array in ascending order.

#include <stdio.h>
int main() {
    // Defining array
    int arr[] = {50, 12, 8, 31, 27, 99, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    // Eyat bubble sort use kora hoise
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
