/*
 * Book Reservation
 * Sample Output:
 * You have successfully reserved the book 'The Great Gatsby' by F. Scott Fitzgerald.
 * Year of Publication: 1925
 * Genre: Fiction
 * Library: Central Library
 * Member ID: 12345
 * Return Date: June 30, 2023
 *
 */

#include <stdio.h>

int main() {
    char title[] = "The Great Gatsby";
    char author[] = "F. Scott Fitzgerald";
    int year = 1925;
    char genre[] = "Fiction";
    char library[] = "Central Library";
    char memberID[] = "12345";
    char returnDate[] = "June 30, 2023";

    printf("You have successfully reserved the book '%s' by %s.\n", title, author);
    printf("Year of Publication: %d\n", year);
    printf("Genre: %s\n", genre);
    printf("Library: %s\n", library);
    printf("Member ID: %s\n", memberID);
    printf("Return Date: %s\n", returnDate);

    return 0;
}
