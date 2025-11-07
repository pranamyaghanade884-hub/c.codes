#include <stdio.h>

int main() {
    float distance, fare;

    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    if (distance <= 5)
        fare = 50;
    else
        fare = 50 + (distance - 5) * 10;

    printf("Total Fare = Rs %.2f\n", fare);
    return 0;
}