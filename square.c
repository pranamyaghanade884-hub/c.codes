#include <stdio.h>

int main() {
    float number, square;
        

    printf("Enter a number to find its square: ");
    scanf("%f", &number);
    
    
    square = number * number;
    

    printf("Square of %.2f is %.2f\n", number, square);
    
    return 0;
}