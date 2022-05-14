#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[3][3] ={
                      {55, 555, 5555},
                      {66, 666, 6666},
                      {77, 777, 7777}
    };

    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}