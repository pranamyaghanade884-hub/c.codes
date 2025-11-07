#include <stdio.h>

int main() {
    float inr, usdRate = 84.5, usd;

    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    usd = inr / usdRate;

    printf("Equivalent in USD = $%.2f\n", usd);
    return 0;
}