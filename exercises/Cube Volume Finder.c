/*
 * Cube Volume Finder
 * Sample Output:
 * Side: 3
 * Volume: 27
 */

#include <stdio.h>

int main() 
{
    int side, vol;
	
    printf("Side: ");
    scanf("%d", &side);
    
    vol = side * side * side;
    printf("Volume: %d", vol);
    
    return 0;
}