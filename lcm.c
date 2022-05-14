#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, LCM;
    printf("Enter two numbers:");
    scanf("%d %d", &m, &n);

    LCM = (m > n) ? m : n;

    while (1)
    {
        if (LCM % m == 0 && LCM % n == 0)
        {
            printf("The LCM of %d and %d is = %d", m, n, LCM);
            break;
        }
        LCM++;
    }

    printf("\n");

    return 0;
}