// Your code here...
/*
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(i=1,i>=a,i++){
        printf("%d\n",i);
    }
    return 0;
}*/
#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Read the integer value
    
    for (int i = 1; i <= a; i++) {  // Loop from 1 to a
        printf("%d", i);  // Print the current value of i
    }
    
    return 0;
}
