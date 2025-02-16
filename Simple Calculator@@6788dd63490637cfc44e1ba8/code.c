#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);  // Read two integers
    
    char op;
    scanf(" %c", &op);  // Read the operator, adding space before %c to handle leftover newline
    
    if(op == '+') {
        printf("%d", a + b);  // Print result of addition
    } else if (op == '-') {
        printf("%d", a - b);  // Print result of subtraction
    } else if (op == '*') {
        printf("%d", a * b);  // Print result of multiplication
    } else if (op == '/') {
        if (b != 0) {  // Check for division by zero
            printf("%d", a / b);  // Print result of division
        } else {
            printf("Error: Division by zero");  // Handle division by zero
        }
    } else {
        printf("Error: Invalid operator");  // Handle invalid operator
    }

    return 0;
}
