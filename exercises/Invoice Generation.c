/*
 * Invoice Generation
 * Sample Output:
 * Invoice for Customer: John Doe
 * Order ID: 12345
 * Total Amount: $99.99
 */

#include <stdio.h>

int main() {
    char name[] = "John Doe";
    int id = 12345;
    float amount = 99.99;

    printf("Invoice for Customer: %s\nOrder ID: %d\nTotal Amount: $%.2f", name, id, amount);

    return 0;
}