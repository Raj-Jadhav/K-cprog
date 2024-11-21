#include <stdio.h>

int main(){
    int principal = 10000;
    float rate = 0.05;
    int time = 3;

    float simple_interest = (principal * rate * time)/ 100;

    printf("simple interest = %.0f%%\n", simple_interest);

return 0;
}