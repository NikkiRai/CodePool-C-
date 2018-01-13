/* 1. For the above class,book:
Create an array of objetcs and display the entire array. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

class book
{ int acc;
 char title[20],author[20];
 float price;

 public:
 book()
 { acc=0;
 price=0.0;
 strcpy(author," ");
 strcpy(title," ");
  }

 void getdata()
 { cout<<"\nEnter the title of the book:";
 gets(title);
 cout<<"\nEnter the author's name:";
 gets(author);
 cout<<"\nEnter the accession number:";
 cin>>acc;
 cout<<"\nEnter its price:";
 cin>>price; }

 void showdata()
 { cout<<"\nTitle of the book:";
 cout<<title;
 cout<<"\nAuthor's name:";
 cout<<author;
 cout<<"\nAccession number:";
 cout<<acc;
 cout<<"\nPrice:";
 cout<<price<<'\n';  }
		 };
void main()
{ char ans; book b[20];int n;
  do{ clrscr();
  cout<<"\nHow many books?";
  cin>>n;
  for(int i=0;i<=n-1;i++)
  b[i].getdata();
  for(i=0;i<=n-1;i++)
  b[i].showdata();
  cout<<"\nDo you want to continue?(Y/N)";
  cin>>ans; } while(toupper(ans)=='Y');
  getch();
  }


