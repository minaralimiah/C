#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, var[N], i;
    printf("How many numbers you want to store in the array? ");
    scanf("%d", &N);
    printf("Enter %d numbers:",N);

    for ( i = 0; i < N; i++)
    {
        scanf("%d",&var[i]);
    }

    printf("The %d numbers are===\n",N);
    for ( i = 0; i < N; i++)
    {
        printf("%d\n",var[i]);
    }

    return 0;
}
    
    