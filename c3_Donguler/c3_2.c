/*
 * This program demonstrates a for loop with multiple initializations, conditions, and updates
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 10;

    // Validate that b is greater than a for the loop to run correctly
    if (b <= a) {
        printf("The initial value of b must be greater than a.\n");
        exit(EXIT_FAILURE);
    }

    // Using a for loop with multiple initializations, conditions, and updates
    for (int i = a, j = b; i <= b && j >= a; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    return EXIT_SUCCESS;
}
