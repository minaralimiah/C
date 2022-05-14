#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[1000], N, pos;
     printf("Enter the number of elements you want in the array: ");
     scanf("%d", &N);
    //  Take the array as input
    printf("Enter the array elements: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Ask the user the position of the element user want to delete
    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);
    // Delete the element in that position
    for (int i = pos; i < N - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    N--; // This line will make covert the array to one unit less otherwise the element will not be deleted
    // Print the array after deleting the desired element
    printf("\nThe array after deleting the element is:\n\t>");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}