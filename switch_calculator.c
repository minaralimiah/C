#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    float result;
    char op;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("Enter a operator '+','-','*','/':");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0)
        {
            printf("Invalid\n");
            exit(0);
        }
        else
            result = a / b;
        break;

    default:
        printf("Invalid\n");
        exit(0);
    }

    printf("Result is %f", result);

    return 0;
}
