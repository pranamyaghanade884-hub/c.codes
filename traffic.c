#include <stdio.h>

int main() {
    char light;

    printf("Enter traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &light);

    if (light == 'R' || light == 'r') {
        printf("STOP!  Red light is ON.\n");
    } 
    else if (light == 'Y' || light == 'y') {
        printf("WAIT!  Yellow light is ON.\n");
    } 
    else if (light == 'G' || light == 'g') {
        printf("GO!  Green light is ON.\n");
    } 
    else {
        printf("Invalid input! Please enter R, Y, or G.\n");
    }

    return 0;
}
