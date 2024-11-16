#include <stdio.h>

int main(){
    //Total Revenue Calculation
    int price1 = 3000;
    int price2 = 4500;
    int price3 = 6000;
    
    int qty1 = 100;
    int qty2 = 150;
    int qty3 = 200;

    int total_revenue = (price1 * qty1) + (price2 * qty2) + (price3 * qty3);

    printf("The total revenue = UGX %d\n",total_revenue);

return 0;
}