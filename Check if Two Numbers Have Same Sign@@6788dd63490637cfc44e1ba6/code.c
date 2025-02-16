// Your code here...#include<stdio.h>
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("Same Sign");
    } else if (a == 0 || b == 0) {
        printf("One or both are zero");
    } else {
        printf("Different Sign");
    }
    
    return 0;
}
