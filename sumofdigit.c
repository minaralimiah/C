#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,lastDigit, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0)
    {
        lastDigit = n%10;
        sum = sum + lastDigit;
        n = n/10;
    }
    printf("The value of count is %d", sum);
}