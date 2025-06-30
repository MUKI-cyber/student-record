#include<stdio.h>
#include"student.h"
void stud_show()
{
if(!hptr)
{
ps("No records to show.");
return;
}	
Student* ptr=hptr;
pf("\nRoll No\tName\tPercentage\n");
while(ptr)
{
printf("%d\t%-15s\t%.2f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
}
