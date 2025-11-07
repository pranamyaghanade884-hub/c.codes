#include <stdio.h>

int main() {
    int i, marks, total = 0;
    float avg;

    for (i = 1; i <= 5; i++) {
        printf("Enter marks of subject %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }

    avg = total / 5.0;
    printf("\nAverage Marks = %.2f\n", avg);

    if (avg >= 75)
        printf("Result: Distinction \n");
    else if (avg >= 60)
        printf("Result: First Class \n");
    else if (avg >= 33)
        printf("Result: Pass \n");
    else
        printf("Result: Fail \n");

    return 0;
}
