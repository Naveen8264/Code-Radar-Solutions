// Your code here...
#include <stdio.h>

int main() {
    int ch;
    scanf("%c",&ch);
    if (ch=="A"){
        printf("Excellent");
    }elseif(ch=="B"){
        printf("Good");
    }elseif(ch=="C"){
        printf("Average");
    }elseif(ch=="D"){
        printf("Below Average");
    }else{
        printf("Fail");
    }
    return 0;
}    