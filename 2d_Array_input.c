#include <stdio.h>
#include <stdlib.h>
int main()
{
    int M, N;
    printf("Enter the number of rows and columns of the Martix:");
    scanf("%d %d", &M, &N);

    int arr[M][N], i, j;
    printf("Enter the Matrix elements:");
    //Taking input for the matrix from user:
    for ( i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix of %d rows and %d columns is shown below:\n\t", M, N);
    //Printing the Matrix:
    for ( i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n\t");
    }
    
    return 0;
    
}