/*
 * Logical Operators
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5, y = 3, z = 7;

    // Using logical operators
    if ((x > y) && (y < z)) {
        printf("x is greater than y and y is less than z.\n");
    }

    if ((x == y) || (y == z)) {
        printf("Either x equals y or y equals z.\n");
    }

    if (!(x > z)) {
        printf("x is not greater than z, reversed using the ! operator.\n");
    }

    return EXIT_SUCCESS;
}
