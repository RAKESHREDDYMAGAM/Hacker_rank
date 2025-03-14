
#include <stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    if(n>=2){
        
    for(int i=1; i<=n; ++i){
        for(int j=1;j<=n;++j){
            if(j==1||i==j  ){
                printf("*");
            }
            else{
                printf(" ");
                }
        }
        printf("\n");
    }
    for(int i=1; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(j==0 || i+j==n-1){
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
  
 }
 else{
     printf("Shape Not Possible");
 }


    return 0;
}
