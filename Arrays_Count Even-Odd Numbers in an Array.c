#include <stdio.h>

int main() {

    int size;
    scanf("%d",&size);
    int a[size];
    int even=0;
    int odd=0;
    for(int i=0;i<=size-1;++i){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=size-1;++i){
        if(a[i]%2==0){
            even++;
        }
        else if(a[i]%2!=0){
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}
