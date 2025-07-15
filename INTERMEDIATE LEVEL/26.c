// 26. Write a C program to search an element in an array (linear search).
#include <stdio.h>
int main() {
    int arr[] = {5, 8, 12, 20, 25};
    int n = 5;
    int key = 20;
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Element %d found at position %d\n", key, i);
    else
        printf("Element %d not found.\n", key);

    return 0;
}
