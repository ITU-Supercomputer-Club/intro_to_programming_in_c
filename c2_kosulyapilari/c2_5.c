/*
 * switch-case Example (break is omitted)
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int score;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    if (score < 0) {
        printf("Enter a valid score between 0 and 100!\n");
        return EXIT_FAILURE;
    }

    switch (score / 10) {
        case 10:
        case 9:
            printf("Letter Grade: A\n");
        case 8:
            printf("Letter Grade: B\n");
        case 7:
            printf("Letter Grade: C\n");
        case 6:
            printf("Letter Grade: D\n");
        case 5:
            printf("Letter Grade: E\n");
        default:
            printf("Letter Grade: F\n");
    }

    return EXIT_SUCCESS;
}
