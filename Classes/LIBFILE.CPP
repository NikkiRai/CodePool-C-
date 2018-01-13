# include <fstream.h>
# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>


class book { int acno;
	     char title[20], auth[20], stat;
	     float price;

	     public :
	     book()
	     { acno=0;
	       strcpy(title," "); strcpy(auth," ");
	       price=0.0;
	       stat='A'; }
	     void getdata();
	     void showdata();
	     void printlist();
	     void issue();
	     void rreturn();
	     int getacno();
	     char *getauth();
	     char *gettitle(); };

void input(book b[100], int &n);
void deletebook(book b[100], int &n, int acc);
int searchacc(book b[100], int n, int acc);
void searchtitle(book b[100], int n, char t[20]);
void searchauth(book b[100], int n, char a[20]);
void sort(book b[100], int n);
void write(book b);
void read(book b[100], int &n);




void main()
{ book b[100];
  int n, i;
  int ch=0;
  clrscr();
  ofstream mf;
  mf.open("lib.dat",ios::binary|ios::app);      //To Create File if not existing
  mf.close();
  read(b,n);
  do { clrscr();
       cout << "LIBRARY MENU";
       cout << "\n1. Add Books";
       cout << "\n2. Issue Book";
       cout << "\n3. Return Book";
       cout << "\n4. Search Book by Accession Number";
       cout << "\n5. Search Book by Title";
       cout << "\n6. Search for Books by an Author";
       cout << "\n7. List Books";
       cout << "\n8. Delete Book";
       cout << "\n9. Delete All Records";
       cout << "\nEnter Choice (Press 0 to exit) : ";
       cin >> ch;
       clrscr();
       int acc;
       switch (ch)
       { case 1 : input(b,n);
		  cout << "\n\nInput : Success!\nPress Enter to continue...";
		  break;
	 case 2 : cout << "Enter Accession Number : ";
		  cin >> acc;
		  i=searchacc(b,n,acc);
		  if(i==-1)
		   cout << "\nBook not in records!";
		  else
		   b[i].issue();
		  break;
	 case 3 : cout << "Enter Accession Number : ";
		  cin >> acc;
		  i=searchacc(b,n,acc);
		  if(i==-1)
		   cout << "\nBook not in records!";
		  else
		   b[i].rreturn();
		  break;
	 case 4 : cout << "Enter Accession Number : ";
		  cin >> acc;
		  i=searchacc(b,n,acc);
		  if(i==-1)
		   cout << "\nNot found!";
		  else
		   b[i].showdata();
		  break;
	 case 5 : cout << "Enter Title : ";
		  char t[20];
		  gets(t);
		  i=0;
		  while (t[i]!='\0')
		  { t[i]=toupper(t[i]); i++; }
		  searchtitle(b,n,t);
		  break;
	 case 6 : cout << "Enter Author : ";
		  char a[20];
		  gets(a);
		  i=0;
		  while (a[i]!='\0')
		  { a[i]=toupper(a[i]); i++; }
		  searchauth(b,n,a);
		  break;
	 case 7 : cout << "Accession Number\tTitle\t\tAuthor\t\tPrice\tStatus\n";
		  for(i=0;i<=n-1;i++)
		   b[i].printlist();
		  break;
	 case 8 : cout << "Enter Accession Number : ";
		  cin >> acc;
		  deletebook(b,n,acc);
		  break;
	 case 9 : remove ("lib.dat");
		  n=0;
		  cout << "\n\nDeletion : Success!\nPress Enter to continue...";
		  break;
	 case 0 : cout << "Accession Number\tTitle\t\tAuthor\t\tPrice\tStatus\n";
		  for(i=0;i<=n-1;i++)
		   b[i].printlist();
		  break;
	 default : cout << "Invalid Choice!"; }
    getch(); } while (ch!=0);
}


void book::getdata()
{ cout << "\nEnter Accession Number : ";
  cin >> acno;
  cout << "Enter Title of Book : ";
  gets(title);
  int i=0;
  while (title[i]!='\0')
  { title[i]=toupper(title[i]);
    i++; }
  cout << "Enter Author : ";
  gets(auth);
  i=0;
  while (auth[i]!='\0')
  { auth[i]=toupper(auth[i]);
    i++; }
  cout << "Enter Price of Book : ";
  cin >> price; }

void book::showdata()
{ cout << "Accession Number : " << acno;
  cout << '\n' << title << " by " << auth;
  cout << "\nPrice : " << price;
  cout << "\nBook Status : " << stat; }

void book::printlist()
{ cout << acno << "\t\t\t" << title << "\t" << auth << "\t\t" << price << '\t' << stat << '\n'; }

void book::issue()
{ if (stat=='A')
  { showdata();
    cout << "\nBook issued!";
    stat='L';}
  else
  { showdata();
    cout << "\nBook unavailable!"; }
}

void book::rreturn()
{ cout << "Book Returned!";
  stat='A'; }

int book::getacno()
{ return acno; }

char *book::getauth()
{ return auth; }

char *book::gettitle()
{ return title; }


void input (book b[100], int &n)
{ int count;
  cout << "Enter Number of Books : ";
  cin >> count;
  for (int i=n;i<=n+count-1;i++)
  { b[i].getdata();
    write(b[i]); }
  n+=count;
  read(b,n); }

void deletebook(book b[100], int &n, int acc)
{ int pos = searchacc(b,n,acc);
  if (pos==-1)
   cout << "\n\nDeletion : Failed (Book not found)\nPress Enter to continue...";
  else
  { cout << "\n\nDeletion : Success!\nPress Enter to continue...";
    for (int i=pos;i<=n-1;i++)
     b[i]=b[i+1];
    n--;
    remove("lib.dat");
    read(b,n); }
}

int searchacc(book b[100], int n, int acc)
{ int i=0,pos=-1;
  while(i<=n-1 && b[i].getacno()!=acc)
   i++;
  if(b[i].getacno()==acc)
   pos=i;
  return pos; }

void searchtitle(book b[100], int n, char t[20])
{ clrscr();
  int num=0;
  cout << "Books by Title \"" << t << '\"';
  cout << "\n\nAccession Number\tTitle\t\tAuthor\t\tPrice\tStatus\n";
  for(int i=0;i<=n-1;i++)
   if(strcmp(t,b[i].gettitle())==0)
   { b[i].printlist();
     num++; }
  cout << "\n\nNumber of Books Found : " << num; }

void searchauth(book b[100], int n, char a[20])
{ clrscr();
  int num=0;
  cout << "Books by " << a;
  cout << "\n\nAccession Number\tTitle\t\tAuthor\t\tPrice\tStatus\n";
  for(int i=0;i<=n-1;i++)
   if(strcmp(a,b[i].getauth())==0)
   { b[i].printlist();
     num++; }
  cout << "\n\nNumber of Books Found : " << num; }

void write(book b)
{ ofstream mf;
  mf.open("lib.dat", ios::binary|ios::app);
  mf.write((char*)&b, sizeof(book));
  mf.close(); }

void read(book b[100], int &n)
{ ifstream mf;
  mf.open("lib.dat", ios::binary);
  int i=0;
  while (mf && i<=99)
  { mf.read ((char*)&b[i], sizeof(book));
    n=i; i++; }
  mf.close();
  sort(b,n);
}

void sort(book b[100], int n)
{ int i,j;
  book x;
  for(i=0;i<=n-2;i++)
   for(j=i+1;j<=n-1;j++)
   { if (b[i].getacno() > b[j].getacno())
     { x=b[i];
       b[i]=b[j];
       b[j]=x; }
   }
}