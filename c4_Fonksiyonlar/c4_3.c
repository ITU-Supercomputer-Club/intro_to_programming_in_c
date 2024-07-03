/*
 * This program demonstrates pass by value and pass by reference in C
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void passByValue(int num);
void passByReference(int *ptr);

int main() {
    int number = 10;

    // Demonstrate pass by value
    printf("Before passByValue, number = %d\n", number);
    passByValue(number);
    printf("After passByValue, number = %d\n", number);

    // Demonstrate pass by reference
    printf("Before passByReference, number = %d\n", number);
    passByReference(&number);
    printf("After passByReference, number = %d\n", number);

    return EXIT_SUCCESS;
}

// Function definition for passByValue
void passByValue(int num) {
    num = 20; // Changes the local copy of 'num', does not affect 'number' in main
    printf("Inside passByValue, num = %d\n", num);
}

// Function definition for passByReference
void passByReference(int *ptr) {
    *ptr = 30; // Changes the value at the memory address pointed to by 'ptr', modifies 'number' in main
    printf("Inside passByReference, *ptr = %d\n", *ptr);
}
