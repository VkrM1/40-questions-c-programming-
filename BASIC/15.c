// 15. Write a C program to convert Celsius to Fahrenheit.
 
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Output the result
    printf("Fahrenheit = %.2f°F\n", fahrenheit);

    return 0;
}

