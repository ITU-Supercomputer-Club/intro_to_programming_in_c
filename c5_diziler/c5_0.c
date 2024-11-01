/*
 * This program demonstrates various ways to initialize static arrays
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize a static array with specific elements
    int array_with_elements[3] = {0, 1, 2};
    
    // Initialize a static array without specifying the size
    int array_infer_size[] = {3, 4, 5, 6};

    // Initialize a static array with all zeros
    int array_all_zeros[5] = {0};

    // Partially initialize a static array
    int array_partial[5] = {7, 8}; // Remaining elements will be zero

    // Declare a static array without initialization
    int array_uninitialized[5]; // Contains garbage values

    // Print elements of each array
    printf("Array with specific elements:\n");
    for (int i = 0; i < 3; i++) {
        printf("array_with_elements[%d] = %d\n", i, array_with_elements[i]);
    }

    printf("\nArray with inferred size:\n");
    for (int i = 0; i < 4; i++) {
        printf("array_infer_size[%d] = %d\n", i, array_infer_size[i]);
    }

    printf("\nArray with all zeros:\n");
    for (int i = 0; i < 5; i++) {
        printf("array_all_zeros[%d] = %d\n", i, array_all_zeros[i]);
    }

    printf("\nPartially initialized array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array_partial[%d] = %d\n", i, array_partial[i]);
    }

    printf("\nUninitialized array (garbage values):\n");
    for (int i = 0; i < 5; i++) {
        printf("array_uninitialized[%d] = %d\n", i, array_uninitialized[i]);
    }

    return EXIT_SUCCESS;
}
