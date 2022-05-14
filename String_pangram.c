#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch[200];
    printf("Enter a sentence:\n\n\t> ");
    gets(ch);

    int flag[26]= {};
    for (int i = 0; i < strlen(ch); i++)
    {
        int num = toupper(ch[i]) - 65;
        if (num >= 0)
            flag[num]++;
    }

    int check = 1;
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 65, flag[i]);
        if (flag[i] == 0)
            check = 0;
    }

    if (check == 1)
        printf("\n\tIt is a Pangram\n");
    else
        printf("\n\tIt is not a Pangaram\n");

    return 0;
}