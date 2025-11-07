#include <stdio.h>
int main() {
    float mass, molar_mass, moles;
    printf("Enter moles: ");
    scanf("%f", &moles);
    printf("Enter molar mass (g/mol): ");
    scanf("%f", &molar_mass);
    mass = moles * molar_mass;
    printf("Mass = %.4f g\n", mass);
    return 0;
}
