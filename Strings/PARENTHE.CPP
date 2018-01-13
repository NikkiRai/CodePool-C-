/* Write a function which takes an algebraic expression(string) as its
parameter, checks if the number of left parethesis and the right parenthesis
are equal and prints EQUAL or UNEQUAL.*/

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

void check(char s[]);

void main()
{ char s[20]; char ans;
do{ clrscr();
cout<<"\nEnter your arithmetic string: ";
gets(s);
clrscr();
cout<<"\nYour String: ";
puts(s);
check(s);
cout<<"\nDo you want to continue?";
cin>>ans;} while(toupper(ans)=='Y');
getch(); }

void check(char s[20])
{ int l=0;int r=0;
for(int i=0;i<=strlen(s)-1;i++)
{ if(s[i]==')')
  r++;
  else
  if(s[i]=='(')
  l++;}
  if(l==r)
  cout<<"\nEQUAL.";
  else
  cout<<"\nNOT EQUAL.";
    }