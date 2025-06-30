#include<stdio.h>
#include<string.h>
//#include"student.h"
#ifndef _STUDENT_H_
#define _STUDENT_H_
#define pf printf
#define ps puts
#define sf scanf
typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}Student;

extern Student* hptr;
void stud_add();
void stud_del();
void stud_show();
void stud_mod();
void stud_save();
void stud_sort();
void stud_del_all();
void stud_rev();

#endif
void stud_mod()
{
	ps("|------------------------------------------------|");
	ps("| Enter which record to search for modification  |");
	ps("| R/r : to search a rollno                       |");
	ps("| N/n : to search a name                         |");
	ps("| P/p : percentage based                         |");
	ps("|                                                |");
	ps("|------------------------------------------------|");

	char op;
	sf(" %c",&op);
	Student* temp=hptr;
	if(!temp)
	ps("|---------------------------------------------|");
	ps("| Enter                                       |");
	ps("| R/r : enter roll to del                     |");
	ps("| N/n : enter name to del                     |");
	ps("|                                             |");
	ps("|---------------------------------------------|");

	if((op=='R')||(op=='r'))
	{
		int roll;
		ps("Enter Roll No to modify:");
		sf("%d",&roll);
		while(temp && temp->rollno!=roll)
			temp=temp->next;
		if(!temp)
		{
			ps("Roll no not  found.");
			return;
		}
		ps("Enter new Name:");
		sf(" %[^\n]",temp->name);
		ps("Enter new Percentage:");
		sf("%f",&temp->percentage);
		pf("Record modified successfully.");
	}
	else if((op=='N')||(op=='n'))
	{
		char name[50];
		ps("Enter the Name to modify:");
		sf(" %[^\n]",name);
		while(temp && strcmp(temp->name,name)!=0)
			temp=temp->next;
		if(!temp)
		{
			ps("Name not found.");
			return;
		}
		ps("Enter the new name :");
		sf(" %[^\n]",temp->name);
		ps("Enter the new percentage:");
		sf("%f",&temp->percentage);
	}
	else if((op=='P')||(op=='p'))
	{
		float percent;
		ps("Enter percentage to modify:");
		sf("%f",&percent);
		while(temp && temp->percentage!=percent)
			temp=temp->next;
		if(!temp)
		{
			ps("Percentage not found");
			return;
		}
		ps("Enter new name:");
		sf(" %[^\n]",temp->name);
		ps("Enter the new percentage:");
		sf("%f",&temp->percentage);
		ps("Record modified successfully.");


	}
	else{
		ps("Invalid option.");
	}
}
