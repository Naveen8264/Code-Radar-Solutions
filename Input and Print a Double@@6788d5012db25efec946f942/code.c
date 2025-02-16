#include<stdio.h>

int main() {
    double a;
    scanf("%lf", &a);  // Read a float value
    printf("You entered: %.4lf", a);  // Print the float with 6 decimal places
    return 0;
}
