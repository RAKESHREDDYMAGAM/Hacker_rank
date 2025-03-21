#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i=0; i<=n-1; ++i){
        scanf("%d", &a[i]);
    }
    
    int flag=1;
    for(int i=0; i<=n-1; ++i){
        if(a[i]>a[i+1]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}
