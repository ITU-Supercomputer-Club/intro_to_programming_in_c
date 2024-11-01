/*
 * This program calculates the sum of the first N natural numbers
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, sum = 0;

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Sum of natural numbers for a negative input is not defined.\n");
        return EXIT_FAILURE;
    } else {
        // Calculate the sum using for loop
        for (int i = 1; i <= number; i++) {
            sum += i;
        }
        printf("Sum of the first %d natural numbers = %d\n", number, sum);
    }

    return EXIT_SUCCESS;
}