/* Write a function which takes a string as a parameter,count the number
of vowels in it and return that count.    */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int count(char s[]);

void main()
{ char ans,s[20];  int c=0;
do{ clrscr();
cout<<"\nEnter your string: ";
gets(s);
clrscr();
cout<<"\nYOUR STRING: ";
puts(s);
c=count(s);
cout<<"\nNumber of vowels : "<<c;
cout<<"\nDo you want to continue?(Y/N) ";
cin>>ans;   } while(toupper(ans)=='Y');
getch(); }


int count(char s[20])
{ int c=0;int i;char ch;
for( i=0;i<=strlen(s)-1;i++)
{ ch=tolower(s[i]);
if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u')
c++;
 }
return c; }