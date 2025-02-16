// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char c;
    scanf("%c",&c);
    if(c==+){
        printf(a+b);
    }else if (c==-){
        printf(a-b);
    }else if (c==*){
        printf(a*b);
    }else if (c==/){
        printf(a/b);
    }else{
        printf("Error");
    }
    return 0;
}