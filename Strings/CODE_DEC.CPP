/* WAF to receive a stringas its argument, code it using any method print
and then decode it and also print it. */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

void code(char s[]);
void decode(char s[]);

void main()
{ char s[20],ans;
do { clrscr();
cout<<"\nEnter your string: ";
gets(s);
clrscr();
cout<<"\nYour Entered String: ";
puts(s);
cout<<"\nCoding It: ";
code(s);
cout<<"\nDo you want to continue? (Y/N) ";
cin>>ans; } while(toupper(ans)=='Y');
getch(); }

void code(char s[20])
{  char a[20];
strcpy(a,strrev(s));
  puts(a);
  decode(a); }

void decode(char a[20])
{  char s[20];
 cout<<"\nDecoding it: ";
strcpy(s,strrev(a));
   puts(s); }