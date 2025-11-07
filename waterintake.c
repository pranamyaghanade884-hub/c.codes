#include <stdio.h>

int main() {
    int weight;
    float water;

    printf("Enter your weight (kg): ");
    scanf("%d", &weight);

    water = weight * 0.033; // liters per kg

    printf("You should drink %.2f liters of water per day.\n", water);

    return 0;
}
