#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, flag = 1;

    printf("Enter a number:");
    scanf("%d", &num);
    
    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");

    return 0;
}