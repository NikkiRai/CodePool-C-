/* Define a class employee having emp no,name,basic and bonus as data
members.  A function calculate to find and assign the bonus for each
employee.(Private Func)
Member funcs:
1. Getadata(): which receives 3 parameters to assign values to the data
members.
2.showdata(): to display the details.
3.Constructor func to initialise the data members. */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

class employee
{ int no;
 char name[20];
 float basic;
 float bonus;

 void calculate()
 { if(basic <= 50000)
 bonus+=0.5*basic;
 else if(basic <= 100000)
 bonus+=0.8*basic;
 else
 bonus+=0.9*basic;
 cout<<"\nBonus: "<<bonus;
 }

 public:
 void getdata(int n,char nam[20],float b)
 { no=n;
  strcpy(name,nam);
  basic=b;
  calculate(); }

  void showdata()
  { cout<<"\nEmployee Number:"<<no;
  cout<<"\nEmployee name: "<<name;
  cout<<"\nBasic Salary: "<<basic; }

  employee()
  { no=0;
   strcpy(name," ");
   basic=0.0;
   bonus=0.0; }
   };

void main()
{ employee e;
clrscr();
e.getdata(1,"nikita",90000);
e.showdata();
getch();   }


