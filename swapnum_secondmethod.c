// swapping two numbers without help of outsider variable
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("\n\nBEFORE SWAPPING\n a = %d\n b = %d", a, b);

    // after swapping two numbers

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("\n\nAFTER SWAPPING\n a = %d\n b = %d", a, b);

    return 0;
}