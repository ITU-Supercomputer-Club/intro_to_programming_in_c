/*
 * This program demonstrates the use of a do while loop
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, sum = 0;

    // Prompt user for input
    printf("Enter a positive integer (enter 0 to stop): ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Negative numbers are not allowed.\n");
        exit(EXIT_FAILURE);
    }

    // Calculate the sum using do while loop
    do {
        sum += number;
        printf("Current sum: %d\n", sum);
        printf("Enter another positive integer (enter 0 to stop): ");
        scanf("%d", &number);

        // Validate input
        if (number < 0) {
            printf("Negative numbers are not allowed. Exiting...\n");
            exit(EXIT_FAILURE);
        }
    } while (number != 0);

    printf("Final sum = %d\n", sum);

    return EXIT_SUCCESS;
}
