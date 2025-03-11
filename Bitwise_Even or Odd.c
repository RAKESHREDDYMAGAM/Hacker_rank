#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n)  ;
    
    if((n&1)==0){
        printf("Even");
    }
    else if((n&1)==1){
        printf("Odd");
    }
    return 0;
}
