// swapping two numbers with help of outsider variable
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("BEFORE SWAPPING\n a = %d\n b = %d", a, b);

    // after swapping two numbers

    int temp = a;
    a = b;
    b = temp;

    printf("\n\nAFTER SWAPPING\n a = %d\n b = %d", a, b);

    return 0;
}