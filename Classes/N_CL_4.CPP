/* Define a Class having roll no,name and marks.
The member funs are:
1.Input the details.
2.Print the details. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

class student
{ int rno;
 char name[20];
 float marks;
 public:
 void getdata()
 { cout<<"\n\nEnter the name :";   //used inline coz very short prgrm.
 gets(name);
 cout<<"\nEnter the roll number:";
 cin>>rno;
 cout<<"\nEnter the marks:";
 cin>>marks;
 }
 void showdata()
 { cout<<"\nNAME: "<<name<<"\nMARKS: "<<marks<<"\nROLL NUMBER: "<<rno; }
     };

void main()
{ student s;char ans;
do { clrscr();
s.getdata();
s.showdata();
cout<<"\nDo you want to contd? (Y/N)";
cin>>ans;} while(toupper(ans)=='Y');
getch();
}
