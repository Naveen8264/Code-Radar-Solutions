// Your code here.

#include<stdio.h>

int main() {
    float radius, Area;  // Declare both radius and Area variables
    scanf("%f", &radius);
    Area = 3.14 * radius * radius;  // Calculate the area
    printf("Area: %.2f", Area);  // Print the area
    return 0;
}

