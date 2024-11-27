#include <stdio.h>

int main(){
    float discount_rate = 0.10;
    int original_price = 200;
    int VAT_rate= 0.18; 
    
    int discounted_price = original_price - (discount_rate* original_price);
    int final_price = discounted_price + (VAT_rate*discount_rate);
    
    //the price of a product after applying a 10% discount and an 18% VAT to an original price of UGX 200
    printf(" The price is %d \n" ,final_price);

return 0;
}