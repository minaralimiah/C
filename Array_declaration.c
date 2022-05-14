#include <stdio.h>
#include <stdlib.h>
int main()
{
    int var[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", var[i]);
    }
    printf("\n%d", var[3]);
    
    return 0;
    
}