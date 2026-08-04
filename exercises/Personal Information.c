/*
 * Personal Information Input
 * Sample Output:
 * Enter your name: John
 * Enter your age: 25
 * Enter your city: Manila
 * Name: John
 * Age: 25
 * City: Manila
 */

#include <stdio.h>

int main() {
    char name[50];
    int age;
    char city[50];

    printf("Enter your name: ");
    scanf("%s", name);
	
    printf("Enter your age: ");
    scanf("%d", &age);
	
    printf("Enter your city: ");
    scanf("%s", city);

    printf("Name: %s \nAge: %d \nCity: %s\n", name, age, city);

    return 0;
}