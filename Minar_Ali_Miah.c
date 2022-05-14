#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Minar[15], i;
    printf("Enter your name:");
    for ( i = 0; i < 15; i++)
    {
        scanf(" %c", &Minar[i]);
    }
    
    printf("Your name is: ");
    for ( i = 0; i < 15; i++)
    {
        printf(" %c",Minar[i]);
    }
    
    return 0;
    
}