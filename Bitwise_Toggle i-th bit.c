#include <stdio.h>

int main() {

    int n,i;
    scanf("%d",&n);
    scanf("%d",&i);
    int j = n^(1<<i);
    printf("%d",j);
    
    return 0;
}
