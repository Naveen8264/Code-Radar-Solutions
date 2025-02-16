#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Read the integer value
    
    for (int i = 1; i <= 10; i++) {  
        printf("%d X %d = %d\n", a, i, a * i);  // Print the multiplication table
    }
    
    return 0;
}

