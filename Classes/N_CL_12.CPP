/* 2.Create an array of objetcs.REceive an accession number and display only
     that book's details if found.     */


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
 cout<<price;  }

 int getacc()
 { return acc;}
	};


void main()
{ book b[20];
char ans;int i,acn,n;
do { clrscr();
cout<<"\nHow many books?";
cin>>n;
for(i=0;i<=n-1;i++)
b[i].getdata();
cout<<"\nEnter the accession number of the book you want:";
cin>>acn;
i=0;
while(b[i].getacc()!=acn && i<=n-1)
i++;
if(b[i].getacc()==acn)
b[i].showdata();
else
cout<<"\nSorry! Not Found.!";
cout<<"\n\nDo you want to continue?(Y/N): ";
cin>>ans;} while(toupper(ans)=='Y');
getch(); }










