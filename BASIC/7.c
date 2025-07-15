// 7. Check whether a year is a leap year or not

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);  //condition for leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("This is a leap year\n");
    else
        printf("Not a leap year\n");
    return 0;
}
