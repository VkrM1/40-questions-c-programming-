// 5. Find the largest of two numbers

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2){  //comparing the number
        printf("%d is larger", num1);
    }
    else{ 
        printf("%d is larger", num2);
    }
}
