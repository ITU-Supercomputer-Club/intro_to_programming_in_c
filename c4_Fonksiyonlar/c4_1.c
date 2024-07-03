/*
 * This program demonstrates function declarations and definitions
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

// Function declarations (prototypes)
int delta(int, int, int);

// Function definition for greet function
void greet() {
    printf("Hello, welcome to the function demonstration!\n");
}

int main() {
    int result;

    // Call the greet function
    greet();

    // Call the delta function
    result = delta(5, 3, 2);
    printf("Result of delta function: %d\n", result);

    return EXIT_SUCCESS;
}

// Function definition for delta function
int delta(int a, int b, int c) {
    return b * b - 4 * a * c;
}
