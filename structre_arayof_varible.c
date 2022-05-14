#include <stdio.h>
#include <stdlib.h>
struct school
{
    char name[50];
    int rollNo, phNo;
};
int main()
{
    struct school std[3];
    printf("Enter name, rollno and phno of 3 students:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %d", std[i].name, &std[i].rollNo, &std[i].phNo);
    }
    
    printf("The entered details of the students are:\n\n\t\t");
    for (int i = 0; i < 3; i++)
    {
        printf("%s - %d - %d\n\n\t\t", std[i].name, std[i].rollNo, std[i].phNo);
    }
    
    return 0;
}