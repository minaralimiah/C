#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the year you want to check:");
    scanf("%d", &year);

    if ( (year%400 == 0) || ((year%4 == 0) && (year%100 != 0)))
        printf("It is a leap year\n");
    else 
        printf("It is not a leap year\n");
    
    return 0;
}