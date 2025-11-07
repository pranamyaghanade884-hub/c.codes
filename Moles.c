#include <stdio.h>

int main() {
    float mass, molar_mass, moles;

    printf("Enter the mass of substance (in grams): ");
    scanf("%f", &mass);

    printf("Enter the molar mass of substance (in g/mol): ");
    scanf("%f", &molar_mass);

    moles = mass / molar_mass;

    printf("Number of moles = %.4f mol\n", moles);

    return 0;
}
