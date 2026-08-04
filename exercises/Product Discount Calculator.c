/*
 * Product Discount Calculator (10% discount)
 * Sample Output:
 * Price: 100
 * Final Price: 90.00
 */

#include <stdio.h>

int main() 
{
    double price, discount, total;
    
    printf("Price: ");
    scanf("%lf", &price);
    
    discount = price * 0.10;
    total = price - discount;
    
    printf("Final Price: %.2lf", total);
	
    return 0;
}