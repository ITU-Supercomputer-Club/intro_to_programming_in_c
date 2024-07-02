/*
 * if/else Example
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int weight;

    printf("Enter your weight: ");
    scanf("%d", &weight);

    if (weight <= 0) {
        printf("Please enter a valid weight value.\n");
        return EXIT_FAILURE;
    }

    if (weight >= 150) {
        printf("You CANNOT use the elevator.\n");
    } else {
        printf("You CAN use the elevator.\n");
    }
    return EXIT_SUCCESS;
}