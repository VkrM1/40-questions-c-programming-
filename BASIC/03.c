// 3. Write a C program to calculate the area of a circle given its radius


#include<stdio.h>
int main(){
    float radius, area;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area = %.2f", area);
    return 0;

}
