#include <stdio.h>

int main() {


    
    int j;
    
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;++i){
    scanf("%d",&a[i]);
    }
    int min=a[0];
    int max=a[0];  
        for(j=0;j<=size-1;++j){
            if(a[j]>max){
               max=a[j];
            }
            else if(a[j]<min){
               min=a[j];
            }
        
    }
    
  
    
    printf("%d %d",max,min);
    return 0;
}
