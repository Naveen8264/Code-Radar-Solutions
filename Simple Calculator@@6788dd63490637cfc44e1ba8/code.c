// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char op;
    scanf("%c",&op);
    if(op=="+"){
        printf(a+b);
    }else if (op=="-"){
        printf(a-b);
    }else if (op=="*"){
        printf(a*b);
    }else if (op=="/"){
        printf(a/b);
    }else{
        printf("Error");
    }
    return 0;
}