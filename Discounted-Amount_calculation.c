#include <stdio.h>

int main(){
    int original_amount =1200;
    float discount_rate = 0.2;

    int final_amount = original_amount - (discount_rate * original_amount);

    printf("the final amount = UGX%d\n" ,final_amount);
return 0;
}