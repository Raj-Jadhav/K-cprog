#include <stdio.h>

int main(){
    int cost_price = 200;
    int selling_price = 250;

    //explicit cast:Explicit Cast: (float)(selling_price - cost_price) ensures floating-point division.
    float profit_loss_percentage = ((float)(selling_price - cost_price)/cost_price) * 100;
    
    //Percentage Symbol: Added %% in the printf statement to display a % sign.
    printf("profit and loss percentage = %.2f%%\n" , profit_loss_percentage);

return 0;
}