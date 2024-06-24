/*
 * Sizeof example
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>

int main() {

    int integer = 5;
    int second_integer;
    float flt;
    double dbl;

    printf("The size of an initialized integer is: %lu\n", sizeof(integer));
    printf("The size of an uninitialized integer is: %lu\n", sizeof(second_integer));

    printf("The size of a float is: %lu\n", sizeof(flt));
    printf("The size of a double is: %lu\n", sizeof(dbl));
    return 0;
}