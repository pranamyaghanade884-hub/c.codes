#include <stdio.h>

int main() {
    int temp;

    printf("Enter today's temperature in Celsius: ");
    scanf("%d", &temp);

    if (temp >= 40) {
        printf("It's Extremely Hot! \n");
    } 
    else if (temp >= 30 && temp < 40) {
        printf("It's Hot Outside! \n");
    } 
    else if (temp >= 20 && temp < 30) {
        printf("Weather is Pleasant \n");
    } 
    else if (temp >= 10 && temp < 20) {
        printf("It's Cold \n");
    } 
    else if (temp >= 0 && temp < 10) {
        printf("It's Very Cold \n");
    } 
    else {
        printf("Freezing Temperature! \n");
    }

    return 0;
}
