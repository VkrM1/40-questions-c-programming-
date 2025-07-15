// 38. Write a C program to read and write data to a file.

#include <stdio.h>
int main() {
    FILE *f;

    // Write data to file
    f = fopen("file.txt", "w");
    fprintf(f, "Hello, File!\n");
    fclose(f);

    // Read data back
    f = fopen("file.txt", "r");
    char ch;
    while ((ch = fgetc(f)) != EOF) {
        putchar(ch);
    }
    fclose(f);

    return 0;
}
