// 23. Write a C program to find the transpose of a matrix.

#include <stdio.h>
int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
