/*
 * This program demonstrates how to manually track the length of an array in C without using pointers
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum size of the array

// Function to add an element to the array
int add_element(int array[], int length, int element) {
    if (length < MAX_SIZE) {
        array[length] = element;
        length++;
        printf("Added %d to array. Current length: %d\n", element, length);
    } else {
        printf("Array is full. Cannot add more elements.\n");
    }
    return length;
}

// Function to remove the last element from the array
int remove_element(int length) {
    if (length > 0) {
        length--;
        printf("Removed last element from array. Current length: %d\n", length);
    } else {
        printf("Array is empty. Cannot remove elements.\n");
    }
    return length;
}

// Function to display current elements of the array
void display_array(int array[], int length) {
    printf("Current elements in the array:\n");
    for (int i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int main() {
    int array[MAX_SIZE]; // Array declaration
    int length = 0;      // Variable to track the current length of the array

    /*
     * The name of the array is actually a pointer that holds the starting address of the array. 
     * Therefore, arrays are passed to functions by reference. This will be discussed in the 'pointers' section.
     */
    
    // Adding elements to the array
    length = add_element(array, length, 10);
    length = add_element(array, length, 20);
    length = add_element(array, length, 30);

    // Removing an element from the array
    length = remove_element(length);

    // Display current elements of the array
    display_array(array, length);

    // Indicate successful termination of the program
    return EXIT_SUCCESS;
}
