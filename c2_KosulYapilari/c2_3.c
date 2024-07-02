/*
 * else if Block Example (Sphagetti Code)
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int score;

    // Get the score from the user
    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    if (score < 0) {
        printf("Enter a valid score between 0 and 100!\n");
        return EXIT_FAILURE;
    }

    if (score >= 90) {
        printf("Letter Grade: A\n");
    } else if (score >= 80) {
        printf("Letter Grade: B\n");
    } else if (score >= 70) {
        printf("Letter Grade: C\n");
    } else if (score >= 60) {
        printf("Letter Grade: D\n");
    } else if (score >= 50) {
        printf("Letter Grade: E\n");
    } else {
        printf("Letter Grade: F\n");
    }

    return EXIT_SUCCESS;
}
