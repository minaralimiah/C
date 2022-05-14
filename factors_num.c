#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, flag = 1;

    printf("Enter a number:");
    scanf("%d", &num);
    
    printf("The factorials of %d is:", num);
    for (i = 1; i <= num; i++)
    {
        if (num%i == 0)
            printf("  %d,",i);
    }
    printf("\n");
    return 0;
}