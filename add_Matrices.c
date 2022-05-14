#include <stdio.h>
#include <stdlib.h>
int main()
{
    int M, N;
    printf("Enter the number of rows and columns of the Martix:");
    scanf("%d %d", &M, &N);

    int arr1[M][N], arr2[M][N], i, j;
    printf("Enter the Matrix elements of the first Matrix:\n");
    // Taking input for the matrix from user:
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the Matrix elements of the second Matrix:\n");
    // Taking input for the matrix from user:
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[M][N];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The the sum of the two Matrices is:\n\t");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n\t");
    }
    return 0;
}