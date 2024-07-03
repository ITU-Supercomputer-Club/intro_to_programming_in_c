/*
 * This program demonstrates nested for loops
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns;

    // Prompt user for input
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    // Validate input
    if (rows <= 0 || columns <= 0) {
        printf("Number of rows and columns must be positive integers.\n");
        exit(EXIT_FAILURE);
    }

    // Nested for loops to print a pattern of stars
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
