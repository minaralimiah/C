#include <stdio.h>
#include <stdlib.h>

int FACTORIAL(int num);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("The factoiral of %d is = %d", num, FACTORIAL(num));

    return 0;
}

int FACTORIAL(int num)
{
    int i, factorial = 1;

    for ( i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }
     
    return (factorial);

}