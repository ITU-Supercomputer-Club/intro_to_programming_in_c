/*
 * Scanf Function Examples
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>

int main() {

    double height = 0, weight = 0;

    printf("To calculate your body mass index (BMI), please enter your height and weight in meters and kilograms, respectively: ");
    
    scanf("%lf %lf", &height, &weight);

    double result = weight / (height * height);

    printf("Your BMI is: %.2lf\n", result);

    return 0;
}

