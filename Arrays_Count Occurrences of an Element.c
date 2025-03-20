#include <stdio.h>

int main() {
 int size;
    scanf("%d",&size);
    int a[size];
    
    int even=0;
  
    for(int i=0;i<size;++i){
        scanf("%d ",&a[i]);
    } 
    int target;
    scanf("%d",&target);
    for(int i=0;i<size;++i){
        if(a[i]==target){
            even++;
        }
        
    }
    printf("%d",even);
    return 0;
}
