/*
 * Circle Area Calculator
 * Sample Output:
 * Enter radius: 5
 * The area is: 78.54
 *
 */

#include <stdio.h>

int main() 
{
    const float PI = 3.14159;
    float radius, area;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = PI * radius * radius;
    printf("The area is: %.2f\n", area);
    
    return 0;
}
