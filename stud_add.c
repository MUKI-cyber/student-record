#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"student.h"
int find_next_roll()
{
int roll=1;
Student* temp=hptr;
while(temp)
{
if(temp->rollno==roll)
{
roll++;
temp=hptr;
}
else
{
	temp=temp->next;
}
}
return roll;
}
void stud_add()
{
Student* new_student=(Student*)malloc(sizeof(Student));
         if(!new_student) 
	 {
	 ps("Memory Allocation failed.");
	 return;
	 }
new_student->rollno=find_next_roll();
ps("Enter the name:");
sf(" %[^\n]",new_student->name);
ps("Enter percentage:");
sf("%f",&new_student->percentage);
new_student->next=0;
if(!hptr)
{
hptr=new_student;
}
else
{
Student* temp= hptr;
while(temp->next)
	temp=temp->next;
temp->next=new_student;
}
pf("Student added successfully with roll no:%d\n",new_student->rollno);
}

