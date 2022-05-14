#include <stdio.h>
int sumOfInt(int x, int y);

int main()
{
    int a, b, sum;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    sum = sumOfInt(a,b);
    printf("The sum is %d", sum);
    return 0;
}
int sumOfInt(int x, int y)
{
    return x+y;
}