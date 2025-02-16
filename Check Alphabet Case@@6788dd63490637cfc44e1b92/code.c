#include<stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else if (ch >= 'a' && ch <= 'z') { // Check if the character is lowercase
        printf("Lowercase");
    } else {
        printf("Not an letter"); // Optional: to handle non-letter characters
    }

    return 0;
}
