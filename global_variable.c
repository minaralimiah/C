#include <stdio.h>
#include <stdlib.h>

// Area of a circle
float PI = 3.14; //Declareing and initializing global variable.
int main()
{
    int r;
    float area;
    printf("Enter the radious of the circle:\n");
    scanf("%d", &r);
    area = PI*r*r;
    printf("The area of the circle is %f", area);
    
    return 0;
}