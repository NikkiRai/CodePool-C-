/* 2nd method.
Define a class student having data members adno,name,m1,m2,m3,t and g.
The member functions are:
1.getdata(): to input the details.
2.showdata():to display.
3.calculate(): to find t and g.     */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

class student
{ int adno;
char name[20],g;
float m1,m2,m3,t;

public:
void getdata();
void calculate();
void showdata();
};

void student::getdata()
{ cout<<"\nEnter the name:";
gets(name);
cout<<"\nEnter admission number:";
cin>>adno;
cout<<"\nEnter marks 1: ";
cin>>m1;
cout<<"\nEnter marks 2: ";
cin>>m2;
cout<<"\nEnter marks 3: ";
cin>>m3; }

void student::calculate()
{ t=m1+m2+m3;
if(t >=90)
g='A';
else if(t >=70)
g='B';
else if(t >=40)
g='C';
else
g='D';
}

void student::showdata()
{ cout<<"\nName: "<<name<<"\nAdmission Number: "<<adno<<"\nMarks 1: "<<m1;
cout<<"\nMarks 2: "<<m2<<"\nMarks 3: "<<m3<<"\nGrade: "<<g<<"\nTotal: "<<t;
}

void main()
{ char ans;student s;
do{ clrscr();
s.getdata();
s.calculate();
s.showdata();
cout<<"\nDo you want to continue?(Y/N)";
cin>>ans; }while(toupper(ans)=='Y');
getch(); }



