/* Define a class having float x,int part 1,float part 2 as data members.
  Member funcs include:
  1. Getdata(): to read x
  2. parts(): to get integer and fractional parts,i.e. part 1 and part 2 of x.
  3. showdata()  */

  #include<iostream.h>
  #include<conio.h>
  #include<ctype.h>
  #include<stdio.h>

  class number
  { float x;
  int p1;
  float p2;

  void parts()
  { p1=x;
    p2=x-p1; }

  public:
  number()
  { x=0.0;
  p1=0;    //constructor
  p2=0.0;  }

  void getdata()
  { cout<<"\nEnter any number:";
  cin>>x; }

  void showdata()
  {  parts();
     cout<<"\nNumber Entered was: "<<x ;
    cout<<"\nInteger Part: "<<p1;
    cout<<"\nFractional Part: "<<p2; }
   };

  void main()
  { number n;
   char ans;
   do { clrscr();
   n.getdata();
   n.showdata();
   cout<<"\nDo you want to continue?(Y/N)";
   cin>>ans; } while(toupper(ans)=='Y');
   getch(); }






