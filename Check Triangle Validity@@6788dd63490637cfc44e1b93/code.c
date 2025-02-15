#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input the sides of the triangle
    printf("Enter the first side: ");
    scanf("%f", &side1);
    printf("Enter the second side: ");
    scanf("%f", &side2);
    printf("Enter the third side: ");
    scanf("%f", &side3);

    // Check if the sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("Valid \n");
    } else {
        printf("Invalid \n");
    }

    return 0;
}
