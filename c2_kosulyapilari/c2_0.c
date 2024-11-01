/*
 * if Example
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int age;

    printf("Enter your age: ");
    scanf("%u", &age);

    if (age < 18) {
        printf("You cannot obtain a driver's license.\n");
    }
    return EXIT_SUCCESS;
}