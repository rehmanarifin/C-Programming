#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;


    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);


    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error: Cannot divide by zero.\n");
            return 1;
        }
    }
    else
    {
        printf("Invalid operator.\n");
        return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
