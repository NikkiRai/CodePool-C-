/* WAF to receive a string as its parameter,reverse( using
strrev()) the string and print */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>

void reverse(char s[]);

void main()
{ char s[20],ans;
do{ clrscr();
cout<<"\nEnter your string: ";
gets(s);
clrscr();
cout<<"\nYour string: ";
puts(s);
reverse(s);
cout<<"\nDo you want to continue?";
cin>>ans; } while(toupper(ans)=='Y');
getch(); }

void reverse(char s[20])
{ char a[20];
strcpy(a,strrev(s));
cout<<"\nYour string: ";
puts(a); }