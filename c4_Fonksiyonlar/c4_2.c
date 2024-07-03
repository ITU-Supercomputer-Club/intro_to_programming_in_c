/*
 * This program demonstrates variable scope in C
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

// Block 3: Function block
void funcBlock() {
    int insideFunction = 100;  // Variable declaration inside function block
    printf("Inside function block: insideFunction = %d\n", insideFunction);
}

int main() {
    // Variable declarations
    int outsideVariable = 10;

    // Block 1: If statement
    if (outsideVariable == 10) {
        int insideIf = 20;  // Variable declaration inside if block
        printf("Inside if block: insideIf = %d\n", insideIf);

        // Variable from outer scope can still be accessed
        printf("Inside if block: outsideVariable = %d\n", outsideVariable);
    }

    // Attempting to access insideIf here will cause a compilation error
    // printf("Outside if block: insideIf = %d\n", insideIf);  // Uncommenting this line will result in an error

    // Block 2: While loop
    int i;
    for (i = 0; i < 3; i++) {
        int insideLoop = i * 2;  // Variable declaration inside for loop
        printf("Inside loop iteration %d: insideLoop = %d\n", i, insideLoop);
    }

    // Attempting to access insideLoop here will cause a compilation error
    // printf("Outside loop: insideLoop = %d\n", insideLoop);  // Uncommenting this line will result in an error

    // Call the function
    funcBlock();

    // Attempting to access insideFunction here will cause a compilation error
    // printf("Outside function block: insideFunction = %d\n", insideFunction);  // Uncommenting this line will result in an error

    return EXIT_SUCCESS;
}
