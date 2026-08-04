/*
 * Rectangle Perimeter Calculator
 * Sample Output:
 * Length: 5
 * Width: 3
 * Perimeter is 16
 */

#include <stdio.h>

int main() 
{
    int length, width, peri;
    
    printf("Length: ");
    scanf("%d", &length);
	
    printf("Width: ");
    scanf("%d", &width);
    
    peri = 2 * (length + width);
    printf("Perimeter is %d", peri);
    
    return 0;
}