#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<=n-1;++i){
        for(int j=i+1;j<n;++j){
            if(a[i]+a[j]==target){
            printf("%d %d" ,a[i],a[j]);
         return 0;
        }
            
     }
        
    }
    printf("-1");
    return 0;
}
