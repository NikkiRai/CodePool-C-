/* Declare a class student with the following Private Members:
(adno,name,marks and grade).Also a function assign grade which assigns the
grade on the basis of marks. Public members:(showdata() and getdata()).
	MARKS      GRADE
       >=80          A
       60-80         B
       40-60         C
       <=40          D        */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

class student
{ int adno;
float marks;
char name[20],g;

void calculate()
{  if(marks >=80)
 g='A';
 else if(marks >=60)
 g='B';
 else if (marks >=40)
 g='C';
 else
 g='D'; }

public:

student()  //costructor
{ strcpy(name," ");
marks=0.0;
g=' ';
adno=0; }

void getdata()
{ cout<<"\nEnter name: ";
gets(name);
cout<<"\nEnter the admission number: ";
cin>>adno;
cout<<"\nEnter the marks: ";
cin>>marks; }

void showdata()
{ cout<<"\nNAME: "<<name;
cout<<"\nMARKS: "<<marks;
cout<<"\nADMISSION NUMEBR: "<<adno;
calculate();
cout<<"\nGRADE: "<<g; }
};


void main()
{ student s;
char ans;
do { clrscr();
s.getdata();
s.showdata();
cout<<"\nDo you want to continue?(Y/N) ";
cin>>ans; } while(toupper(ans)=='Y');
getch();
}
