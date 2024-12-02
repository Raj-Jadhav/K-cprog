#include <stdio.h>

int main(){
    //11 break-even point calculation
    int fixedCost = 2000;
    int variableCost = 15;
    int sellingPrice = 25;
    int breakEvenPoint = fixedCost/(sellingPrice-variableCost);
    
    printf("The break even point is UGX %d\n\n", breakEvenPoint);
 
 return 0;
}