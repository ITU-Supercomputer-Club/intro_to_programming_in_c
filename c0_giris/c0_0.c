/*
 * Interpretation/Compilation Example
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>

void print_language() {
    printf("Hello, I'm C!\n");
}

void do_sth_wrong() {
    x;
}

int main() {
    print_language();

    do_sth_wrong(); // This function will intentionally do things wrong.

    print_language();

    return 0;
}