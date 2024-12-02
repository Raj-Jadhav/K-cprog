#include <stdio.h>

int main(){
//13 commission calculations
    int saleVolume = 50000;
    float commissionRate = 0.05;
    int commission = saleVolume * commissionRate;
    printf("The commission is UGX%d\n\n", commission);

 return 0;
}