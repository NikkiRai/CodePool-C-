/* Define a class having accno,name,accno type as private data members.
 The member functions are:
 1. To input data.
 2. To Deposit Money
 3. To Withdraw Money (min bal >=1000)
 4. To Print data */

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
     }   };

  void transact(bank &);

  void main()
  { bank b; char ans;
  do{ clrscr();
   b.getdata();
   transact(b);
   b.showdata();
   cout<<"\nDo you want to continue?(Y/N)";
   cin>>ans; } while(toupper(ans)=='Y');
   getch(); }


  void transact(bank &b)
  { char t;
  cout<<"Do you want to withdraw or deposit ?(W/D)";
  cin>>t;
  if(toupper(t)=='W')
  b.with();
  else if(toupper(t)=='D')
  b.dep();
  }