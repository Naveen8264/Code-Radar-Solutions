// Your code here...
#include <stdio.h>

int main() {
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
 
    
    if (side1 == side2 && side2 == side3) {
        printf(" Equilateral");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf(" Isoscele");
    }
    else {
        printf(" Scalene");
    }

    return 0;
}
