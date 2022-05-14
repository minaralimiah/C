// #include <stdio.h>
// #include <stdlib.h>

// float sum(int x, int y);
// float subtract(int x, int y);
// float multiplication(int x, int y);
// float division(int x, int y);


// int main()
// {
//     int a, b;
//     float result;
//     char op;
//     printf("Enter two numbers:");
//     scanf("%d %d", &a, &b);

//     printf("Enter the operator:");
//     scanf(" %c", &op);

//     switch (op)
//     {
//     case '+':
//         result = sum(a, b);
//         break;
//     case '-':
//         result = subtract(a, b);
//         break;
//     case '*':
//         result = multiplication(a, b);
//         break;
//     case '/':
//         if (b == 0)
//         {
//             printf("Invalid\n");
//             exit(0);
//         }
//         else
//             result = division(a, b);
//         break;

//     default:
//         printf("Invalid\n");
//         exit(0);
//     }

//     printf("Result is %f", result);

//     return 0;
// }

// float sum(int x, int y)
// {
//     return x + y;
// }
// float subtract(int x, int y)
// {
//     return x - y;
// }
// float multiplication(int x, int y)
// {
//     return x * y;
// }
// float division(int x, int y)
// {
//     return x / y;
// }

#include <stdio.h>
#include <stdlib.h>

float calculate(int a, char op, int b);

int main()
{
    int a, b;
    float result;
    char op;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("Enter the operator:");
    scanf(" %c", &op);
    result = calculate(a,op,b);
    printf("Result is %f", result);

    return 0;
}

float calculate(int a, char op, int b)
{
    switch (op)
    {
    case '+': return (a+b);
    case '-': return (a-b);
    case '*': return (a*b);
    case '/':
        if (b == 0)
        {
            printf("Invalid\n");
            exit(0);
        }
        else
            return (a/b);

    default:
        printf("Invalid\n");
        exit(0);
    }

}