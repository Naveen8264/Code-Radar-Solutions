#include<stdio.h>

int main() {
    double a;
    scanf("%l", &a);  // Read a float value
    printf("You entered: %.4l", a);  // Print the float with 6 decimal places
    return 0;
}
