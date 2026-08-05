/*
 * Basic ATM Simulation
 * Sample Output:
 * Current Balance: 1000
 * Enter amount to withdraw: 200
 * New balance: 800
 *
 */

#include <stdio.h>

int main() 
{
    int balance = 1000;
    int withdraw;
    
    printf("Current Balance: %d\n", balance);
    printf("Enter amount to withdraw: ");
    scanf("%d", &withdraw);
    
    balance = balance - withdraw;
    printf("New balance: %d\n", balance);
    
    return 0;
}
