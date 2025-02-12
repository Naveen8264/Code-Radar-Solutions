#include <stdio.h>

int main() {
    int a, b;
    // Ensure that both a and b are input as integers
    scanf("%d %d", &a, &b);  
    
    if (a > 0 && b > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
