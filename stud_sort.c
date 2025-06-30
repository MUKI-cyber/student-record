#include<stdio.h>
#include<string.h>
#include "student.h"

void swap_students(Student* a, Student* b)
{
    int roll_temp = a->rollno;
    char name_temp[50];
    float perc_temp = a->percentage;

    strcpy(name_temp, a->name);

    a->rollno = b->rollno;
    strcpy(a->name, b->name);
    a->percentage = b->percentage;

    b->rollno = roll_temp;
    strcpy(b->name, name_temp);
    b->percentage = perc_temp;
}

void sort_by_name()
{
    for (Student* i = hptr; i != NULL; i = i->next)
    {
        for (Student* j = i->next; j != NULL; j = j->next)
        {
            if (strcmp(i->name, j->name) > 0)
            {
                swap_students(i, j);
            }
        }
    }
}

void sort_by_percentage()
{
    for (Student* i = hptr; i != NULL; i = i->next)
    {
        for (Student* j = i->next; j != NULL; j = j->next)
        {
            if (i->percentage > j->percentage)
            {
                swap_students(i, j);
            }
        }
    }
}

void stud_sort()
{
    char op;
    if (!hptr)
    {
        ps("No records to sort");
        return;
    }

    ps("|---------------------------------------------|");
    ps("| Enter                                       |");
    ps("| N/n : sort with name                        |");
    ps("| P/p : sort with percentage                  |");
    ps("|---------------------------------------------|");

    sf(" %c", &op);

    if (op == 'N' || op == 'n')
    {
        sort_by_name();
    }
    else if (op == 'P' || op == 'p')
    {
        sort_by_percentage();
    }
    else
    {
        ps("Invalid option!");
        return;
    }

    ps("Sorting done successfully.");
}

