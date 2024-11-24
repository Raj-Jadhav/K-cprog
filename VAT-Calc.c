#include <stdio.h>

int main(){
    int base_price = 150;
    float VAT_rate = 0.18;
    int final_price = base_price + (VAT_rate * base_price);

    printf("The final price = UGX %d\n" ,final_price);

 return 0;
}