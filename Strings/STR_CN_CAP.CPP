/* WAP to input two arrays of string country ans capital such that country
name and its capital name is stored at same index for 10 countries.
For a given country,print its capital and vice-versa. */


# include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

void getdata(char country[10][25], char caps[10][25]);
void search(char country[10][25], char caps[10][25]);

void main()
{ char ans; int ch;
  char country[10][25], caps[10][25];
  do { clrscr();
 cout<<"COUNTRIES AND CAPITALS\n";
 cout<<"\n1. Feed Data";
 cout<<"\n2. Search";
 cout<<"\n\nEnter Choice: ";
 cin>>ch;
 switch(ch)
 { case 1 : getdata(country,caps);
	    break;
   case 2 : search(country,caps);
	    break;
   default :cout<<"Wrong Choice."; }

 cout<<"\nDo you want to continue? ";
 cin>>ans; } while(toupper(ans)=='Y') ;
 getch();
}

void getdata(char country[10][25], char caps[10][25])
{   for(int i=0;i<=9;i++)
  { cout << "Enter Country Name : ";
    gets(country[i]);
    cout << "Enter Its Capital : ";
    gets(caps[i]);
    cout << '\n'; }
}

void search(char country[10][25], char caps[10][25])
{ char temp[20];
  cout << "Enter Name of Country/Capital : ";
  gets(temp);
  int i;  int c=0;
  for(i=0;i<=9;i++)
  if(strcmpi(temp,country[i])==0 || strcmpi(temp,caps[i])==0)
    { cout << "\nCountry Name : " << country[i];
      cout << "\nCapital Name : " << caps[i];
      c++; }

  if(c==0)
   cout << "\nNo Match Found!";
}