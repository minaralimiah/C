#include <stdio.h>
#include <string.h>
struct school
{
    char name[50];
    int rollNo, phNo;
};

int main()
{
    struct school student;
    printf("Enter the name, rollNo and Phone no of the student:\n\t\t");
    gets(student.name);
    scanf("%d %d", &student.rollNo, &student.phNo);

    printf("The entered details of the stuent are:\n\n\t %s %d %d", student.name, student.rollNo, student.phNo);

    return 0;
}