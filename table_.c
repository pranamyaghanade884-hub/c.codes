#include <stdio.h>

int main()
{
    int num, table[10];

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }

    printf("\nMultiplication Table of %d:\n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, table[i]);
    }

    return 0;
}