#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input the sides of the triangle
   
    scanf("%f", &side1);
 
    scanf("%f", &side2);

    scanf("%f", &side3);

    // Check if the sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("Valid \n");
    } else {
        printf("Invalid \n");
    }

    return 0;
}
