/* Write a function which takes two strings as its parameters,uses strcmp()
to compare the strings and prints the message accordingly. */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

void compare(char a[],char b[]);

void main()
{ char ans; char a[20],b[20],c[30];
do { clrscr();
cout<<"\nEnter the 1st string: ";
gets(a);
cout<<"\nEnter the 2nd string: ";
gets(b);
compare(a,b);
cout<<"\nDo you want to continue?(Y/N) ";
cin>>ans;} while(toupper(ans)=='Y');
getch;        }

void compare(char a[20],char b[20])
{  char c[30];
 if(strcmpi(a,b)==0)
 cout<<"\nStrings are Equal.";
 else
 cout<<"\nStrings Are Not equal.";
 }