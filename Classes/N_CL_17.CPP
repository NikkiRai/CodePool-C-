/* Define a class having accno,name,accno type as private data members.
 The member functions are: (Array of objects)
 1. To input data.
 2. To Deposit Money
 3. To Withdraw Money (min bal >=1000)
 4. To Print data
 Input the accno and then do the above funcs.*/

 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>
 #include<ctype.h>
 #include<string.h>

 class bank
 { int accno;
  char name[20];
  char type;
  float bal;
  public:
  bank() //constructor
  { accno=0;
   strcpy(name," ");
   type=' ';
   bal=0.0; }
   void getdata()
   { cout<<"\nEnter the accno number:";
   cin>>accno;
   cout<<"\nEnter name: ";
   gets(name);
  cout<<"\nEnter account type (Current Accn:C/Savings Accn:S) ";
     cin>>type;
   cout<<"\nEnter your balance: ";
   cin>>bal;    }

   void showdata()
   { cout<<"\nNAME: "<<name<<"\nACCOUNT NUMBER: "<<accno<<"\nTYPE:"<<type<<"\nBALANCE:"<<bal ;}

   void dep()
   { float d;
   cout<<"\nEnter amount to be deposited: ";
   cin>>d;
   bal+=d;
      }

   void with()
   {  float d;
   cout<<"\nEnter amount to be withdrawn: ";
   cin>>d;
   if((bal-d) < 1000)
   cout<<"\nMoney Cannot be Withdrawn.Minimum Balance should be Rs 1000.";
   else
    bal-=d;
     }

   int getaccno()
   { return accno; }    };


  void search(bank b[],int,int);

  void main()
  { bank b[20];int n,i,no; char ans;
  do{ clrscr();
  cout<<"\nHow many customers ";
  cin>>n;
  for(i=0;i<=n-1;i++)
   b[i].getdata();
   cout<<"\nEnter the accno for which you need to do the transaction:";
   cin>>no;
   search(b,no,n);
    cout<<"\nDo you want to continue?(Y/N)";
   cin>>ans; } while(toupper(ans)=='Y');
   getch(); }


   void search(bank b[20],int no,int n)
  { int i;
  i=0;
  while(no!=b[i].getaccno() && i<=n-1)
  i++;
  if(no==b[i].getaccno())
   { char t;
  cout<<"Do you want to withdraw or deposit ?(W/D)";
  cin>>t;
  if(toupper(t)=='W')
  {b[i].with();
  b[i].showdata();}
  else if(toupper(t)=='D')
  {b[i].dep();
  b[i].showdata(); }  }}
