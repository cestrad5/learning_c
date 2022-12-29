#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char *name;
    char *surname;
    int grade;
} stData;

void printStudentData (stData *p);

int main()
{
    stData jhon = {"Jhon", "Doe", 8};
    stData ana = {"Ana", "Smith", 10};

    printStudentData(&ana);
    printStudentData(&jhon);

    return 0;
}

void printStudentData (stData *p)
{
    printf("Name: %s\n", p->name);
    printf("Surname: %s\n", p->surname);
    printf("Grade: %d\n", p->grade);
    printf("\n");
}
