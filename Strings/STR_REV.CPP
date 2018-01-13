/* WAF to receive a string as its parameter,reverse(without using
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
{ int i; char x;int n;
n=strlen(s);
for(i=0;i<=n/2-1;i++)
{ x=s[i];
s[i]=s[n-1-i];
s[n-1-i]=x ;  }
cout<<"\nYour string: ";
puts(s); }