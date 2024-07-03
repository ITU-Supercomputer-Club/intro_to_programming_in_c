/*
 * This program calculates the factorial of a given number
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, factorial = 1;

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
        return EXIT_FAILURE;
    } else {
        int i = 1;
        // Calculate factorial using while loop
        while (i <= number) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %d\n", number, factorial);
    }

    return EXIT_SUCCESS;
}