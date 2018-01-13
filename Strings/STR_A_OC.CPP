/* WAP to read N strings of 20 characters each. Count the number of A's. */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>

void count(char s[][20],int );

void main()
{ char s[10][20],ans; int n;
do { clrscr();
cout<<"\nHow many strings? ";
cin>>n;
cout<<"\nEnter any "<<n<<" strings: ";
for(int i=0;i<=n-1;i++)
gets(s[i]);
clrscr();
cout<<"\nYour strings: ";
for(i=0;i<=n-1;i++)
puts(s[i]);
count(s,n);
cout<<"\nDo you want to continue? ";
cin>>ans; } while(toupper(ans)=='Y');
getch();
}

void count(char s[10][20],int n)
{ int j;int c=0;
for(int i=0;i<=n-1;i++)
 { for(j=0;j<=strlen(s[i]-1);j++)
   { s[i][j]=tolower(s[i][j]);
   if(s[i][j]=='a')
   c++; }
   }
cout<<"\nOccurance of A: "<<c<<" times."; }
