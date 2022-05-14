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
    if (reversedn == copyn)
        printf("The number is a palindrome");
    else
        printf("The number is not palindrome");
    printf("\n");

    return 0;
}