#include <stdio.h>

int main() {
  double iniamt;
  int noofdays;
  
  scanf("%lf", &iniamt);
  scanf("%d", &noofdays);
  double currentamount=iniamt;
  double minimum=iniamt;
  
  if((50<=iniamt && iniamt<=1000000) && (0<=noofdays && noofdays<=100)){
    for(int i=1; i<=noofdays; ++i){
       if (currentamount<(0.4*iniamt)) {
                printf("Stopped early after %d days: %.2lf\n",(i-1),currentamount);
                printf("Minimum amount held by Bhaskar: %.2lf\n",currentamount);
                printf("Better Luck Next Time!");
                return 0;
        }
      if(i%2==0 && i%3==0){
        currentamount+=0.70*currentamount;
        i=i+6;
        continue;
      }
      else if(i%2==0){
        currentamount-=0.125*currentamount;
      }
      else if(i%3==0){
        currentamount-=0.2*currentamount;
      }
      else{
        currentamount-=0.10*currentamount;
      }
      if(currentamount<minimum){
        minimum=currentamount;
      }
    }
    printf("After %d days: %.2lf\n", noofdays, currentamount);
    printf("Minimum amount held by Bhaskar: %.2lf\n", minimum);
    if(currentamount>0.7*iniamt){
      printf("Lucky Bhaskar");
    }
    else{
    printf("Better Luck Next Time!");
      }
  }
   return 0;
}
