/* Define a class item having itemcode,item name,stock and price.
Member Funcs are:
1.To receive details of an item.
2.To display the details .
3.Constructor to intialise.
WAP to create an array of items.Receive the name of a particular item
and display the details.   */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

class item
{ int icode,stock;
char iname[20];
float price;

public:
item()
{ icode=0;
stock=0;
price=0.0;
strcpy(iname," "); }

void getdata()
{ cout<<"\nEnter the item name:";
gets(iname);
cout<<"\nEnter the item code:";
cin>>icode;
cout<<"\nEnter the stock:";
cin>>stock;
cout<<"\nEnter price:";
cin>>price;
}

void showdata()
{ cout<<"\nItem name:";
cout<<iname;
cout<<"\nItem code:";
cout<<icode;
cout<<"\nStock:";
cout<<stock;
cout<<"\nPrice:";
cout<<price;
}

char *getiname()
{ return iname; }

int geticode()
{ return icode;}
};

void name(item d[],int);
void code(item d[],int);

void main()
{ item d[20];char ans;
int n,i; char ch;
 clrscr();
cout<<"\nHow many items?";
cin>>n;
for(i=0;i<=n-1;i++)
d[i].getdata();

do{ clrscr();
cout<<"\nMENU:";
cout<<"\nYou want to enter:";
cout<<"\nA.Item's name.";
cout<<"\nB.Item Code.";
cout<<"\n to check for the details.? (Press 0 to exit.)";
cout<<"\n\nEnter your choice(A/B):";
cin>>ch;
switch(ch)
{ case 'a':
 case 'A': name(d,n);
	 break;
 case 'b':
 case 'B': code(d,n);
	 break;
  default: cout<<"\nWrong Input."; }
cout<<"\nDo you want to continue?(Y/N)";
cin>>ans; } while(toupper(ans)=='Y');
getch();
}

void name(item d[20],int n)
{ int i;char name[20];int c=0;
  cout<<"\nEnter the name of the item whose details you want:";
  gets(name);
 for(i=0;i<=n-1;i++)
 if(strcmpi(name,d[i].getiname())==0)
 { d[i].showdata();
 c++;}
 if(c==0)
  cout<<"\nNot Found.";
 }

void code(item d[20],int n)
{ int i;int c;
cout<<"\nEnter the item code for the details of the item:";
cin>>c;
i=0;
while(c!=d[i].geticode() && i<=n-1)
i++;
if(c==d[i].geticode())
  d[i].showdata();
else
 cout<<"\nNOt Found."; }






