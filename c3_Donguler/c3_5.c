/*
 * This program demonstrates the use of break and continue in loops
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter a positive integer (enter -1 to stop): ");
    scanf("%d", &number);

    // Infinite loop to demonstrate break and continue
    while (1) {
        // Check if the input is negative
        if (number < 0) {
            if (number == -1) {
                printf("Terminating the loop.\n");
                break;  // Exit the loop if the user enters -1
            } else {
                printf("Negative numbers are not allowed. Try again.\n");
                printf("Enter a positive integer (enter -1 to stop): ");
                scanf("%d", &number);
                continue;  // Skip the rest of the loop and prompt again
            }
        }

        // Print the number if it's positive
        printf("You entered: %d\n", number);

        // Prompt for another input
        printf("Enter another positive integer (enter -1 to stop): ");
        scanf("%d", &number);
    }

    return EXIT_SUCCESS;
}
