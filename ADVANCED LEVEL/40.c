// 40. Write a C program to implement dynamic memory allocation using malloc() and free().

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory
    arr = (int *)malloc(n * sizeof(int));

    // Check if allocation succeeded
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize and print values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    free(arr); // Release memory

    printf("\n");
    return 0;
}
