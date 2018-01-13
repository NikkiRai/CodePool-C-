/* Write a program to input a list of 5 names and sort them alphabetically
using any of the sorting methods. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void sort(char s[][20]);

void main()
{ char s[5][20];char ans;
do { clrscr();
cout<<"\nEnter any 5 strings: ";
for(int i=0;i<=4;i++)
gets(s[i]);
clrscr();
cout<<"\nYour strings: ";
for(i=0;i<=4;i++)
{ puts(s[i]);
cout<<'\n'; }
sort(s);
cout<<"\nDo you want to continue? ";
cin>>ans;} while(toupper(ans)=='Y');
getch(); }

void sort(char s[5][20])
{ int i,j; char x[20];
for(i=0;i<=3;i++)
for(j=0;j<=3-i;j++)
if(strcmpi(s[j],s[j+1]) > 0)
{ strcpy(x,s[j]);
strcpy(s[j],s[j+1]);
strcpy(s[j+1],x);
}
cout<<"\nYour required string: ";
for(i=0;i<=4;i++)
{ puts(s[i]);
cout<<'\n'; }
}

