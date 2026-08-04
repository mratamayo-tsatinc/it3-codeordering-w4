/*
 * Wage Calculator
 * Sample Output:
 * Pay: $620.00
 */

#include <stdio.h>

int main() 
{
    int hours = 40;
    float rate = 15.50;
    float total;
    
    total = hours * rate;
    printf("Pay: $%.2f", total); //2 decimal places
    
    return 0;
}