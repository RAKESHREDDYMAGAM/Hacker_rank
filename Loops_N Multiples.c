#include <stdio.h>

int main() {

   int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    
    for( int i=1;i<=n;++i){
         
       printf("%d ",x*i);
    }
    return 0;
}
