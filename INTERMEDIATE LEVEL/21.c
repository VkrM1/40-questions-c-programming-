// 21. Write a C program to perform matrix addition.

#include <stdio.h>
int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];
    int i, j;

    // Add each element from same position
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
