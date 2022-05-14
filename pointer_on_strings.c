#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter  a string: ");
    gets(name);
    printf("The entered string is %s\n", name);

    // printf("%c\n", *name);
    // printf("%d\n", name);

    char *p;
    p = &name;

    for (int i = 0; i < strlen(name); i++)
        printf("%c", *p++);


    return 0;

}