// Write a program to find the roots of quadratic equation.

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>

class quadratic
{  int a,b,c;
  public:
  void input();
  void calculate();
  };

void main()
{ quadratic q;
 char ans;
 do { clrscr();
 q.input();
 q.calculate();
 cout<<"\nDo you want to continue?(Y/N)";
 cin>>ans; } while(toupper(ans)=='Y');
 getch();
 }

void quadratic ::input()
{ cout<<"Equation Will be of the form ax^2+bx+c=0 ";
cout<<"\nEnter the value of a:";
cin>>a;
cout<<"\nEnter the value of b:";
cin>>b;
cout<<"\nEnter the value of c:";
cin>>c;
}

void quadratic ::calculate()
{ float r1,r2,d;
d= (b*b)-(4*a*c);
if(d==0)
{ cout<<"\nROOTS ARE EQUAL AND REAL:";
 cout<<"\nROOT 1 ="<< (-b+sqrt(d))/(2*a);
 cout<<"\nROOT 2 ="<< (-b-sqrt(d))/(2*a); }
else if(d > 0)
{ cout<<"\nROOTS ARE REAL AND UNEQUAL:";
 cout<<"\nROOT 1 ="<< (-b+sqrt(d))/(2*a);
 cout<<"\nROOT 2 ="<< (-b-sqrt(d))/(2*a);  }
 else
 cout<<"\nROOTS ARE IMAGINARY ";
 }



