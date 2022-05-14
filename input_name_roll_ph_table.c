#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[3][50];
    int rollNO[3], phNo[3];

    printf("Enter name, roll and Phone no of three students:\n");
    for (int i = 0; i < 3; i++)
    {
        gets(name[i]);
        scanf("%d %d", &rollNO[i], phNo[i]);
    }
    printf("Here is the entered names of three students:\n\n\t");
    for (int i = 0; i < 3; i++)
    {
        printf("%s - %d - %d\n\n\t", name[i], rollNO[i], phNo[i]);
    }
    
    return 0;
}