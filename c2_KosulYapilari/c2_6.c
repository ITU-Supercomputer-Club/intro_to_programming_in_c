/*
 * Boolean Data Type
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Necessary to use the boolean data type

int main() {
    // Declaring boolean variables
    bool isTrue = true;  // Assigning true value
    bool isFalse = false; // Assigning false value

    // Demonstrating assignment of int values to boolean variables
    bool intToBool = 42; // Any non-zero int value is assigned as true (1)
    bool zeroToBool = 0;  // Zero int value is assigned as false (0)

    // Printing the values of the boolean variables
    printf("isTrue: %d\n", isTrue);
    printf("isFalse: %d\n", isFalse);
    printf("intToBool (42): %d\n", intToBool);
    printf("zeroToBool (0): %d\n", zeroToBool);

    // Conditional check using boolean variable
    if (isTrue) {
        printf("isTrue is true!\n");
    } else {
        printf("isTrue is false!\n");
    }

    // Another conditional check
    if (isFalse) {
        printf("isFalse is true!\n");
    } else {
        printf("isFalse is false!\n");
    }

    return EXIT_SUCCESS;
}
