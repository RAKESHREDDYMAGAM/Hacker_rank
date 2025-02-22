#include <stdio.h>
int main(){
   int unit;
   float bill;
   scanf("%d",&unit);
   if(unit<0){
       printf("Invalid Input!");
       return 0;
   }

   if(unit>=0 && unit<=100){
       bill=5*unit;
   }
   else if(unit>100 && unit<=300){
       bill=7*(unit-100) + 500;
   }
   else if(unit>300){
       bill=10*(unit-300) + 500 +1400;
   }
   if(bill<=1200.00){
       bill-=bill*0.1;
   }
   printf("The electricity bill is: %.2f.",bill);
    return 0;
}
