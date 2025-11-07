#include<stdio.h>

int main(){
    float current, R, r, EMF;

    printf("Enter the current (in Amperes):");
    scanf("%f",&current);

    printf("Enter the external resistance (in Ohms):");
    scanf("%f",&R);

    printf("Enter the internal resistance (in Ohms):");
    scanf("%f",&r);

    EMF = current * (R+r);

    printf("EMF = %.2f ohms",EMF);

    return 0;

}