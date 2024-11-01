/*
 * Preincrement/Postincrement Example
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h> // printf
#include <stdlib.h> // EXIT_SUCCESS

#define COUNTER 1

int main() {

    int counter = COUNTER;

    printf("Counter: %d\n", counter);
    printf("Counter: %d\n", counter++);
    printf("Counter: %d\n", counter);
    printf("Counter: %d\n", ++counter);


    return EXIT_SUCCESS;
}