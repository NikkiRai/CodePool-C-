/* Receive the name of the author and display details of the book written
 by him .. */


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
 book()      //constructor
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
 cout<<price;  }

 char *getauthor()
 { return author; }

	 };

void main()
{ book b[20]; book c;
char ans,authr[20];int i,n;
do { clrscr();
cout<<"\nHow many books?";
cin>>n;
for(i=0;i<=n-1;i++)
b[i].getdata();
cout<<"\nEnter the author's name whose books you want to search: ";
gets(authr);
for(i=0;i<=n-1;i++)
{if(strcmp(authr,b[i].getauthor())==0)
{b[i].showdata();}  }
if(i!=n)
cout<<"\n No match";
cout<<"\n\nDo you want to continue?(Y/N): ";
cin>>ans;} while(toupper(ans)=='Y');
getch(); }









