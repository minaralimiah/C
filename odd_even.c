#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number to chek even or odd:");
    scanf("%d", &num);

    if (num%2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    
    return 0;

}