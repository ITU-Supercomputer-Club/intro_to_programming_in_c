/*
 * This program demonstrates incorrect index access and modification in arrays
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
 */

#include <stdio.h>
#include <stdlib.h>

// Function to demonstrate out-of-bounds access
void demonstrate_out_of_bounds_access() {
    printf("1. Out-of-Bounds Access:\n");
    int out_of_bounds[3] = {1, 2, 3};
    // Attempting to access an out-of-bounds index
    printf("Attempting to access out_of_bounds[3]\n");
    int value = out_of_bounds[3]; // Error: index 3 is out of bounds
    printf("Value at out_of_bounds[3] (undefined): %d\n", value); // This can cause undefined behavior
    printf("\n");
}

// Function to demonstrate out-of-bounds modification
void demonstrate_out_of_bounds_modification() {
    printf("2. Out-of-Bounds Modification:\n");
    int out_of_bounds[3] = {1, 2, 3};
    // Attempting to modify an out-of-bounds index
    printf("Attempting to set out_of_bounds[3] = 10\n");
    out_of_bounds[3] = 10; // Error: index 3 is out of bounds
    printf("Attempted to modify out_of_bounds[3] (undefined)\n");
    printf("\n");
}

// Function to demonstrate negative index access
void demonstrate_negative_index_access() {
    printf("3. Negative Index Access:\n");
    int negative_index[3] = {4, 5, 6};
    // Attempting to access a negative index
    printf("Attempting to access negative_index[-1]\n");
    int value = negative_index[-1]; // Error: negative index is invalid
    printf("Value at negative_index[-1] (undefined): %d\n", value); // This can cause undefined behavior
    printf("\n");
}

// Function to demonstrate negative index modification
void demonstrate_negative_index_modification() {
    printf("4. Negative Index Modification:\n");
    int negative_index[3] = {4, 5, 6};
    // Attempting to modify a negative index
    printf("Attempting to set negative_index[-1] = 20\n");
    negative_index[-1] = 20; // Error: negative index is invalid
    printf("Attempted to modify negative_index[-1] (undefined)\n");
    printf("\n");
}

int main() {
    demonstrate_out_of_bounds_access();
    //demonstrate_out_of_bounds_modification();
    //demonstrate_negative_index_access();
    //demonstrate_negative_index_modification();

    return EXIT_SUCCESS;
}
