// 39. Write a C program to merge two files into a third file.

#include <stdio.h>
int main() {
    FILE *f1, *f2, *f3;
    char ch;

    // Open first file to read
    f1 = fopen("file1.txt", "r");
    // Open second file to read
    f2 = fopen("file2.txt", "r");
    // Open third file to write
    f3 = fopen("merged.txt", "w");

    // Copy contents of first file
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    // Copy contents of second file
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Files merged successfully.\n");
    return 0;
}
