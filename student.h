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
