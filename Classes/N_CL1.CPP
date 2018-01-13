/* To check for Positive Negative Zero..
   Even Odd Zero and Prime numbers..*/

#include<iostream.h>
#include<conio.h>
#include<ctype.h>

class number
{  int n;
 public:
 void oez();
 void pnz();
 void prime();
 void input();
 void display(); };

 void main()
 { clrscr();
 int op;
 char ans;
 number n;

 n.input();
 do{ clrscr();
  n.display();
  cout<<"\nMENU:";
 cout<<"\nYou want to check for:";
 cout<<"\n1. Even/Odd/Zero";
 cout<<"\n2.Positive/Negative/Zero";
 cout<<"\n3.Prime";

 cout<<"\nEnter your choice(1-3)";
 cin>>op;
 switch(op)
 { case 1:n.oez();
	  break;
   case 2:n.pnz();
	  break;
  case 3:n.prime();
	 break;
 default:cout<<"\nWrong Choice.";
 }

 cout<<"\nDO YOU WANT TO CONTINUE(Y/N)";
 cin>>ans;} while(toupper(ans)=='Y');
 getch();
 }

void number::input()
{ cout<<"\nEnter your number:";
cin>>n;         }

void number::display()
{ cout<<"\nYOUR NUMBER: "<<n;
}

void number::pnz()
{ if (n==0)
cout<<"\nZERO";
else if (n < 0)
cout<<"\nNEGATIVE";
else
cout<<"\nPOSITIVE";
}

void number::oez()
{ if (n==0)
cout<<"\nZERO";
else if(n%2==0)
cout<<"\nEVEN";
else
cout<<"\nODD";
}

void number::prime()
{ int i;
while(n%i!=0 && i<=n/2)
i++;
if(n%i==0)
cout<<"\nNOT PRIME ";
else
cout<<"\nPRIME";
}