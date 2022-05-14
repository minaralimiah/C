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
    int i= num, factorial = 1;
    factorial = factorial * i;
    i--; return (factorial);
    FACTORIAL(num);
    

}