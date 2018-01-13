/* Define a class rectangle having:
 float length,breadth and area.
 Member functions include:-
 (i) getdata()
 (ii) showdata()
 Use a friend function large() which takes two objects of above type as
 arguments,compares their area and returns the bigger rectangle. */

 #include<iostream.h>
 #include<conio.h>
 #include<ctype.h>

 class rectangle
 { float l,b,a;
  void area()
  { a=l*b; }

 public:

 void getdata()
 { cout<<"\nEnter the length : ";
 cin>>l;
 cout<<"\nEnter the breadth : ";
 cin>>b;
 }

 void showdata()
 { cout<<"\nLength : "<<l;
 cout<<"\nBreadth : "<<b;
 area();
 cout<<"\nArea : "<<a<<"\n\n"; }

 friend rectangle large(rectangle,rectangle);
 };

 void main()
 { char ans;
 rectangle x,y,z;
 do { clrscr();
 x.getdata();
 y.getdata();
clrscr();
x.showdata();
y.showdata();
z=large(x,y);
cout<<"\nRECTANGLE HAVING THE LARGER AREA: ";
z.showdata();
cout<<"\nDo you want to continue?(Y/N) ";
cin>>ans; } while(toupper(ans)=='Y');
getch();
}

rectangle large(rectangle x,rectangle y)
{
else if(x.a > y.a)
 return x;
 else
 return y;
 }