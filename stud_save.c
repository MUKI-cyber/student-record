#include<stdio.h>
#include<stdlib.h>
#include "student.h"
void stud_save()
{
	char op;

				 ps("|---------------------------------------------|");
				 ps("|                                             |");
				 ps("| S/s : save and exit                         |");
				 ps("| E/e : exit without saving                   |");
				 ps("|                                             |");
				 ps("|---------------------------------------------|");
				sf(" %c",&op);

				 if((op=='S')||(op=='s'))
				 {
                                   FILE* fp=fopen("student.txt","w");
				   if(!fp)
				   {
				   ps("Unable to open file.");
				   return;
				   }
                                   Student* temp=hptr;

				    while (temp) {
            fprintf(fp, "%d %s %f\n", temp->rollno, temp->name, temp->percentage);
            temp = temp->next;
        }
				   fclose(fp);
				   ps("Data saved successfully.");
				   exit(0);
				 }
				 else if((op=='E')||(op=='e'))
				 {

                                     ps("Exiting without saving.");
				     exit(0);
					 
				 }
				 else
				 {
				 ps("Invalid option.");
				 }
}
