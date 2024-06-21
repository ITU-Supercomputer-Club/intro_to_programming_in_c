/*
    Interpretation/Compilation Example
    Mustafa Can Caliskan
    ITU Supercomputer Club, 2024
*/

#include <stdio.h>

void print_hpc() {
    printf("Hello, I'm running!\n");
}

void do_sth_wrong() {
    int* ptr = NULL;
    *ptr = 42;
}

int main() {
    print_hpc();

    do_sth_wrong(); // This function will intentionally do things wrong.

    print_hpc();

    return 0;
}