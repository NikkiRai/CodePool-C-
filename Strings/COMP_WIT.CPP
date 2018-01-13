/* Write a function which takes two strings as a parameter, compares
them without using strcmp() and prints the message accordingly. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>


void compare(char s[],char a[]);

void main()
{ char ans; char s[20],a[20];
do{ clrscr();
cout<<"\nEnter your 1st string: ";
gets(s);
cout<<"\nEnter your 2nd string: ";
gets(a);
clrscr();
cout<<"\nYour 1st string: ";
puts(s);
cout<<"\nYour 2nd string: ";
puts(a);
compare(s,a);
cout<<"\nDo you want to continue? ";
cin>>ans; } while(toupper(ans)=='Y');
getch(); }

void compare(char s[20],char a[20])
{ int i=0;
if(strlen(s)==strlen(a))
  { while(i<=strlen(a)-1 && toupper(a[i])==toupper (s[i]))
     i++;
     if(i==strlen(a))
     cout<<"\nSAME STRINGS. ";
     else
     cout<<"\nDIFFERENT STRINGS. ";  }
     else
     cout<<"\nDIFFERENT STRINGS.";
     }