/* Define a class to represent a book in a library.Include the following members:
Member funcs:                     (1 object)
1.To assign initial values.
2.To return a book.
3.To issue a book after checking its availability.
4.To display book information.. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

class book
{ int acc;
 char title[20],author[20];
 float price;
 char issued;

 public:
 book()
 { acc=0;
 price=0.0;
 strcpy(author," ");
 strcpy(title," ");
 issued='N'; }

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
 cout<<price;
 cout<<"\nStatus of the book :"<< " issued"; }

void issue()
{ if(issued=='N')
 cout<<"\nAvailable for issuing.\n";
else
cout<<"\nAlready issued. Not available.\n"; }


void returnn()
{ issued='N';}
		};

void main()
{ book b;char t;
char ans;
do { clrscr();
b.getdata();
cout<<"\nDo you want to issue this book?(Y/N)";
cin>>t;
if(toupper(t)=='N')
cout<<"\nThankyou for your visit.";
else
{ b.issue();
b.returnn();
b.showdata(); }
cout<<"\nDo you want to continue?(Y/N): ";
cin>>ans;} while(toupper(ans)=='Y');
getch(); }


