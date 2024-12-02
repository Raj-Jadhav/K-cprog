#include <stdio.h>

int main(){
//14 straight line depreciation
    int assetCost = 5000;
    int residualValue = 500;
    int usefulLife = 5;
    int depreciation = (assetCost-residualValue)/usefulLife;
    printf("The depreciation is UGX%d\n\n", depreciation);

 return 0;
}