/*
 * switch-case Example
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

    // Determine the letter grade based on the score
    switch (score / 10) {
        case 10: // For scores 100
        case 9:  // For scores 90-99
            printf("Letter Grade: A\n");
            break;
        case 8:  // For scores 80-89
            printf("Letter Grade: B\n");
            break;
        case 7:  // For scores 70-79
            printf("Letter Grade: C\n");
            break;
        case 6:  // For scores 60-69
            printf("Letter Grade: D\n");
            break;
        case 5:  // For scores 50-59
            printf("Letter Grade: E\n");
            break;
        default: // For scores below 50
            printf("Letter Grade: F\n");
            break;
    }

    return EXIT_SUCCESS;
}
