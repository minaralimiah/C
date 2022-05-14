#include <stdio.h>
void delhi();
void kolkata();

int main()
{
    printf("Hi. I am in the Main function\n");
    delhi();
    kolkata();

    return 0;
}

void delhi()
{
    printf("Hi. I am in the Delhi function\n");
}

void kolkata()
{
    printf("Hi. I am in the Kolkata function\n");
}
