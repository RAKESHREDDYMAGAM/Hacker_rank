#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
   
    
    for(int i=0;i<n;++i){
        int flag=0;
        for(int j=i+1;j<n;++j){
            if(a[j]==a[i]){
                printf("%d",a[i]);
                flag=1;
               
                return 0;
            }
        }
        if(flag==1){
            return 0;
        }
    }  
    printf("No Repeating Element");
    
    
    return 0;
}
