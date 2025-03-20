#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int flag=1;
    printf("%d",n);
    for(int i=n-1;i>=1;--i){
        if(n%i==0){
            if(flag==0){
            printf(" %d",i);
                flag=1;
            }
            else{
                flag=0;
            }
           
        }
        
    }
    printf(".");
    
        
    return 0;
}
