/*
 * This program demonstrates the use of a function.
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

// Function to get user choice
int getUserChoice() {
    int choice;
    printf("Enter 1 to continue or 0 to exit: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    int choice;

    // Infinite loop using while (1)
    while (1) {
        printf("Infinite loop using while (1)\n");
        choice = getUserChoice();

        if (choice == 0) {
            printf("Exiting the loop.\n");
            break;  // Exit the loop if the user enters 0
        } else if (choice != 1) {
            printf("Invalid choice. Try again.\n");
            continue;  // Skip the rest of the loop and prompt again
        }

        // Perform some action
        printf("You chose to continue.\n");
    }

    return EXIT_SUCCESS;
}