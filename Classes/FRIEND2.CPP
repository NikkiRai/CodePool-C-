/* Define a class having matrix of the order 10*10 containing integer member funcs:
1.Input matrix
2.Print matrix
Use a friend function which takes input as two objects of the above type and
returns the object after adding the two matrices. */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

class matrix
{ int a[10][10];
  int r,c;

  public:
  void input();
  void show();

 friend matrix add(matrix,matrix);
	 };

void matrix::input()
{ cout<<"\nHow many rows? ";
cin>>r;
cout<<"\nHow many columns?";
cin>>c;
cout<<"\nEnter any "<<r*c<<" elements:";
for(int i=0;i<=r-1;i++)
for(int j=0;j<=c-1;j++)
cin>>a[i][j];
}

void matrix:: show()
{
for(int i=0;i<=r-1;i++)
{ for(int j=0;j<=c-1;j++)
cout<<a[i][j]<<' ';
cout<<'\n';    }
}

matrix add(matrix m1,matrix m2)
{ matrix m3;
  m3.r=m1.r;
 m3.c=m1.c;
  for(int i=0;i<=m1.r-1;i++)
for(int j=0;j<=m1.c-1;j++)
m3.a[i][j]=m1.a[i][j]+m2.a[i][j];
return m3; }

void main()
{ matrix m1,m2,m3;
char ans;
do { clrscr();
 cout<<"\nPlease enter equal dimensions of both the matrices..";
 m1.input();
    m2.input();
cout<<"\nYour 1st matrix:\n";
m1.show();
cout<<"\nYour 2nd matrix:\n";
m2.show();
cout<<"\nYour 3rd matrix after adding the two:\n";
m3=add(m1,m2);
m3.show();
cout<<"\nDo you want to continue?(Y/N)";
cin>>ans ;} while(toupper(ans)=='Y');
getch(); }

