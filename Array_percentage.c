#include <stdio.h>
#include <stdlib.h>
int main()
{
    int marks[6], i, sum = 0;
    float percentage;
    printf("Enter marks of your 6 subjects:");
    
    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&marks[i]);
    }
    
    for ( i = 0; i < 6; i++)
    {
        sum = sum + marks[i];
    }
    percentage = sum/6;
    printf("Your percentage is = %f", percentage);

    return 0;
    
}