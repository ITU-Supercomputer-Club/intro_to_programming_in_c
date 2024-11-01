/*
 * The Numerical Equivalents of Characters
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>

int main() {

    char a = 'a';
    char space = ' ';
    char b = 'A';
    char zero = '0';
    char exclamation = '!';

    printf("The numerical equivalent of the character '%c' is %d\n", space, space);
    printf("The numerical equivalent of the character '%c' is %d\n", a, a);
    printf("The numerical equivalent of the character '%c' is %d\n", b, b);
    printf("The numerical equivalent of the character '%c' is %d\n", zero, zero);
    printf("The numerical equivalent of the character '%c' is %d\n", exclamation, exclamation);

    return 0;
}