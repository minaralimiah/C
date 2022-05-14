#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[1000], N, i, j, temp;

    //  Ask the user the enter the no of array elements
     printf("Enter the number of elements you want in the array: ");
     scanf("%d", &N);

    //  Take the array as input
    printf("Enter the array elements: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Sort the array
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print the array after deleting the desired element
    printf("\nThe array after sorting  elements is:\n\t>");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}