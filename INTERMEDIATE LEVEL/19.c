// 19. Write a C program to find the largest element in an array.

#include <stdio.h>
int main() {
    int arr[] = {45, 22, 98, 12, 67, 33, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, max;
    max = arr[0];  //assume first element is maximum
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Largest element in the array = %d\n", max);
    return 0;
}
