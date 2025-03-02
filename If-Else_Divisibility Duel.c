#include <stdio.h>

int main() {

    int x,y,z;
    scanf("%d %d %d",&x, &y, &z);
    
    if(x>0 && y>0 && z>0 ){
        if(x%y==0 && x%z==0){
          printf("X defeats all!");
        }
        else if(x%y==0 && x%z!=0){
             printf("Y triumphs over X!");
        }
         else if(x%y!=0 && x%z==0){
             printf("Z outsmarts X!");
        }
        else{
            printf("X remains undefeated!");
        }
    }
    else{
        printf("Invalid");
    }
    
    return 0;
}
