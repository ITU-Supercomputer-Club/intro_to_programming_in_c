/*
 * Overflow/Underflow Example
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h> // printf
#include <limits.h> // To obtain the maximum and minimum values of data types.

int main() {

    int max_int = INT_MAX; // It comes from limits.h library.

    printf("max_int: %d\n", max_int);

    max_int = max_int + 1;

    printf("max_int: %d\n", max_int);

    unsigned min_unsigned_int = 0; // The minimum value of any unsigned number is naturally 0.

    min_unsigned_int = min_unsigned_int - 1;

    printf("max_int: %u\n", min_unsigned_int);
    
    return 0;
}