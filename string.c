#include <stdio.h>
#include <string.h>
int main()
{
    char var[100];
    printf("Enter your name:");
    gets(var);
    puts(var);
    printf("%s", strlwr(var));
    printf("\n%c",var[2]);
    printf("\n%d", strlen(var));
    return 0;
}