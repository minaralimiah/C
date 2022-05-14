#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, copyn, remainder, reversedn = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    copyn = num; //935

    while(num != 0)
    {
        remainder = num % 10;
        reversedn = reversedn * 10 + remainder;
        num = num / 10;

    }
    printf("The reversed number of %d is = %d", copyn, reversedn);
    
    return 0;
}