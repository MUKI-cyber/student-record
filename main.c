#include<stdio.h>
#include "student.h"
Student *hptr=0;
int main()
{

	char op;

	while(1)
	{
		ps(" ____________________________________________________");
		ps("|                                                    |");
		ps("|           **STUDENT RECORD MENU**                  |");
		ps("|----------------------------------------------------|");
		ps("| a/A :add new record                                |");
		ps("| d/D :delete a record                               |");
		ps("| s/S :show the list                                 |");
		ps("| m/M :modify a record                               |");
		ps("| v/V :save                                          |");
		ps("| e/E :exit                                          |");
		ps("| t/T :sort the list                                 |");
		ps("| l/L :delete all records                            |");
		ps("| r/R :reverse the list                              |");
		ps("|                                                    |");
		ps("|                                                    |");
		ps("| Enter your choice:                                 |");
		ps("|----------------------------------------------------|");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a':
			case 'A':stud_add();
				 break;
			case 'd':
			case 'D':
				 stud_del();
				 break;
			case 's':
			case 'S':stud_show();
				 break;
			case 'm':
			case 'M':
				 stud_mod();
				 break;
			case 'v':
			case 'V':
				 stud_save();
				 break;
			case 'e':
			case 'E':
				 return 0;
			case 't':
			case 'T':
				 stud_sort();
				 break;
			case 'l':
			case 'L':
				 stud_del_all();
				 break;
			case 'r':
			case 'R':
			         stud_rev();
				 break;



		}

	}

}
