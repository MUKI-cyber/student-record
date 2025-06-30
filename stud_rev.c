#include<stdio.h>
#include<stdlib.h>
#include"student.h"

void stud_rev()
{
Student *prev=0,*current=hptr,*next=0;
while(current)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
hptr=prev;
ps("List reversed successfully.");
}
