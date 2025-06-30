#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"student.h"

void stud_del()
{
	char op;

	ps("|---------------------------------------------|");
	ps("| Enter                                       |");
	ps("| R/r : enter roll to del                     |");
	ps("| N/n : enter name to del                     |");
	ps("|                                             |");
	ps("|---------------------------------------------|");
	scanf(" %c",&op);
	if((op=='R')||(op=='r'))
	{
		int roll;
		pf("Enter the roll number to delete:");
		sf("%d",&roll);
		Student *temp=hptr,*prev=NULL;
		while(temp&&temp->rollno !=roll)
		{
			prev=temp;
			temp=temp->next;

		}
		if(!temp)
		{
			ps("Roll number not found");
			return;
		}
		if(!prev)
			hptr=temp->next;
		else
			prev->next=temp->next;
		free(temp);
		ps("Student record deleted.");


	}
	else if((op=='N')||(op=='n'))
	{
		char name[50];
		ps("Enter the name to delete:");
		sf(" %[^\n]",name);
		Student *temp=hptr;
		int found=0;
		pf("\nStudents matching name '%s':\n",name);
		while(temp)
		{
			if(strcmp(temp->name,name)==0)
			{
				pf("Rol No: %d\n",temp->rollno);
				found=1;
			}
			temp=temp->next;
		}
		if(!found)
		{
			ps("No matching student fount");
			return;

		}
		int  roll;
		ps("Enter the Roll no to delete:");
		sf("%d",&roll);
		temp=hptr;
		Student *prev=0;
		while(temp&&temp->rollno!=roll)
		{
			prev=temp;
			temp=temp->next;
		}
		if(!temp)
		{
			ps("Roll no not found.");
			return;
		}
		if(!prev)
			hptr=temp->next;
		else
			prev->next=temp->next;

		free(temp);
		ps("Student record deleted.");
	}
}

