#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 35;
    int *p, **q, ***r;
    p = &A;
    q = &p;
    r = &q;

    printf("The value of A is %d\n", A);
    printf("The value of A is %d\n", *p);
    printf("The value of A is %d\n", **q);
    printf("The value of A is %d\n\n", ***r);

    printf("The address of A is %d\n", &A);
    printf("The address of A is %d\n", p);
    printf("The address of A is %d\n", *q);
    printf("The address of A is %d\n\n", **r);

    printf("The Adress of p is %d\n", &p);
    printf("The Adress of p is %d\n", q);
    printf("The Adress of p is %d\n\n", *r);

    printf("The Adress of q is %d\n", &q);
    printf("The Adress of q is %d\n\n", r);

    printf("The Adress of r is %d\n", &r);
    

    return 0;
    
}