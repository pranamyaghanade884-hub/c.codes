#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

 
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }

    printf("Sum of %d numbers = %.2f\n", n, sum);

    return 0;
}
