#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a,b,c,i;
    a = 0, b = 1;

    printf("Enter a limit:");
    scanf("%d", &num);
    printf("\n");
    for ( i = 1; i <=num; i++)
    {
        printf("%d, ", a); 
        c = a + b; 
        a = b; 
        b = c;

        
    }
    printf("\n");

    return 0;
}