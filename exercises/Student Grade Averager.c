/*
 * Student Grade Averager
 * Sample Output:
 * Enter three marks: 85 90 95
 * Average is: 90.000000
 */

#include <stdio.h>

int main() 
{
    float m1, m2, m3, avg;
    
    printf("Enter three marks: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    
    avg = (m1 + m2 + m3) / 3.0;
    printf("Average is: %f", avg);
    
    return 0;
}