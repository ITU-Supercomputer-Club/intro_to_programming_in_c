/*
 * Double/Float Format Specifier Examples
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>

int main() {
    float f = 123.456;
    double d = 780.916;

    printf("Double Examples:\n");
    printf("%.2lf\n", d);
    printf("%.1lf\n", d);
    printf("%.3lf\n", d);
    printf("%5.2lf\n", d);
    printf("%6.1lf\n", d);
    printf("%7.4lf\n", d);

    printf("\nFloat Examples:\n");
    printf("%.2f\n", f);
    printf("%.1f\n", f);
    printf("%.3f\n", f);
    printf("%5.2f\n", f);
    printf("%6.1f\n", f);
    printf("%7.4f\n", f);


    return 0;
}

