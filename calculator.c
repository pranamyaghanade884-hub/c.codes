#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers\n: ");
    scanf("%f%f", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("result : %.2f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("result : %.2f", result);
        break;

    case '*':
        result = num1 * num2;
        printf("result : %.2f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("result : %.2f", result);
        break;

    default:
        printf("invalid input");
    }

    return 0;
}