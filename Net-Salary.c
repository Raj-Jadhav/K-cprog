#include <stdio.h>

int main(){
    //Net Salary Calculation
    int gross_salary = 5000;
    float tax_rate = 0.1;
    int net_salary = gross_salary - (tax_rate * gross_salary);

    printf("The net salary = UGX %d\n",net_salary);

return 0;
}