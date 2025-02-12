// Your code here...#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a >0&&b>0) {
        printf("True\n");  // Added semicolon here
    } 
    else {
        printf("False\n");
    }
    return 0;
}