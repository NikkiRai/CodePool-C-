/* Define a class student having data memebers adno,name,m1,m2,m3,t,g.
 The memeber functions are:  (using 1 object)
 getdata(): to input adno,name,m1,m2,m3.
 calculate():  to find t and g.
 showdata(): to display name,t and g.  */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

class student
{ int adno;
 char name[20],g;
 float m1,m2,m3,t;

 public:

 void getdata()  //Accessor Funcs.
 { cout<<"\nEnter the student's name:";
 gets(name);
 cout<<"\nEnter admission number:";
 cin>>adno;
 cout<<"\nEnter marks 1:";
 cin>>m1;
 cout<<"\nEnter marks 2:";
 cin>>m2;
 cout<<"\nEnter marks 3:";
 cin>>m3;
 }

void calculate() //Mutator Funs.
{ t=m1+m2+m3;
 if(t >= 90)
 g='A';
 else if(t >=70)
 g='B';
 else if (t >=40)
 g='C';
 else
 g='D';}

void showdata()  //Accessor Funs.
{ cout<<"\nNAME: "<<name<<"\n\nTotal: "<<t<<"\n\nGRADE "<<g; }
		   };
void main()
{ char ans;student s;
 do { clrscr();
s.getdata();
s.calculate();
s.showdata();
 cout<<"\n\nDo you want to continue?(Y/N)";
cin>>ans;}
while(toupper(ans)=='Y');
getch(); }