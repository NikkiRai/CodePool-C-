/* Receive a particular accession number and issue that book to the user
if found. */


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
 cout<<price;  }

 void issue()
{ if(issued=='N')
 { cout<<"\nAvailable for issuing.\n";
   cout<<"\nBOOK IS ISSUED";
   showdata();
 issued='Y'; }
else
cout<<"\nAlready issued. Not available.\n"; }


void returnn()
{ issued='N';
  cout<<"\nBook returned."; }

 int getacc()
 { return acc;}
	};

void search(book b[],int);
void rreturn(book b[],int);

void main()
{ book b[20];
char ans;int i,n,num;
 clrscr();
cout<<"\nHow many books?";
cin>>n;
for(i=0;i<=n-1;i++)
b[i].getdata();
do{ clrscr();
cout<<"\nYou want to: ";
cout<<"\n1.Issue a Book? ";
cout<<"\n2.Return a Book? ";
cout<<"\nEnter your choice(1-2)";
cin>>num;
switch(num)
{ case 1: search(b,n);
	  break;
case 2:   rreturn(b,n);
	  break;
default: cout<<"\nWrong input.";     }

cout<<"\n\nDo you want to continue?(Y/N): ";
cin>>ans;} while(toupper(ans)=='Y');
getch(); }

void search(book b[20],int n)
{  int acn,i;
cout<<"\nEnter the accession number of the book you want to issue:";
cin>>acn;
i=0;
while(b[i].getacc()!=acn && i<=n-1)
i++;
if(b[i].getacc()==acn)
 b[i].issue();
else
cout<<"\nSorry! Not Found.!"; }

void rreturn(book b[20],int n)
{ int acn,i;
 cout<<"\nEnter the accession number of the book you want to return:";
cin>>acn;
i=0;
while(b[i].getacc()!=acn && i<=n-1)
i++;
if(b[i].getacc()==acn)
 b[i].returnn();
 else
cout<<"\nSorry! Not Found.!";
 }