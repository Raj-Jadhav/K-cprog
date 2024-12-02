#include <stdio.h>

int main(){
//15 annual salary calculation
    int hourlyWage = 30;
    int hoursPerWeek = 40;
    int weeksPerYear = 52;
    int annualSalary = hourlyWage*hoursPerWeek*weeksPerYear;
    printf("The annual salary is UGX%d\n\n", annualSalary);

 return 0;
}