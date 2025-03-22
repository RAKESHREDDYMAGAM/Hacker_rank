#include <stdio.h>

int main() {

    int n,i;
    scanf("%d",&n);
    int a[n];
    
    for( i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
        
    }
    int target;
    scanf("%d",&target);
    // int count=0;
    for(i=0;i<=n-1;++i){
       if(a[i]==target){
           printf("%d",i);
           break;
       }
        else{
            continue;
        }
    }
    if(i==n){
        printf("-1");
    }
    
  
    
    return 0;
}
