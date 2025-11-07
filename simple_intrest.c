#include <stdio.h>

int main() {
    float principal, rate, interest;
    int year;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    for (year = 1; year <= 5; year++) {
        interest = (principal * rate * year) / 100;
        printf("Year %d: Interest = %.2f\n", year, interest);
    }

    return 0;
}
