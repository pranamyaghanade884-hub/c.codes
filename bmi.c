#include <stdio.h>

int main() {
    float bmi;

    printf("Enter your BMI value: ");
    scanf("%f", &bmi);

    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } 
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You are Normal weight.\n");
    } 
    else if (bmi >= 25 && bmi < 29.9) {
        printf("You are Overweight.\n");
    } 
    else if (bmi >= 30) {
        printf("You are Obese.\n");
    } 
    else {
        printf("Invalid BMI value.\n");
    }

    return 0;
}
