/* Define a Class
 having roll no,name and marks.
The member funs are:
1.Input the details.
2.Print the details. For an array of objects for many students. */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>


class student
{ int rno;
 char name[20];
 float marks;

 public:
  void getdata()
 { cout<<"\n\nEnter the name :";   //used inline coz very short prgrm.
 gets(name);
 cout<<"\nEnter the roll number:";
 cin>>rno;
 cout<<"\nEnter the marks:";
 cin>>marks;
 }

 void showdata()
 { cout<<"\nNAME: "<<name<<"\nMARKS: "<<marks<<"\nROLL NUMBER: "<<rno; }

 float getmarks()
 { return marks; }

 int getrno()
 { return rno; }
    };

void sortmarks(student s[],int);
void sortrno(student s[],int);

void main()
{ student s[10];int n,i;char ans;
do { clrscr();
cout<<"\nHow many students? ";
cin>>n;
cout<<"\nEnter details of any "<<n<<" students";
for(i=0;i<=n-1;i++)
s[i].getdata();

cout<<"\nORIGINAL LIST:";
for(i=0;i<=n-1;i++)
s[i].showdata();

sortmarks(s,n);
sortrno(s,n);

cout<<"\n\nStudents Securing more than 90:";
for(i=0;i<=n-1;i++)
{ if(s[i].getmarks() > 90) //Print the details of students securing above 90
s[i].showdata();   }
cout<<"\nNil";


cout<<"\n\nStudents having roll number b/w 1 to 25: ";
for(i=0;i<=n-1;i++)  //Print the details of students having rno b/w 1 to 25
{ if(s[i].getrno() >=1 && s[i].getrno() <=25)
s[i].showdata();
}
cout<<"\nNil.";
cout<<"\nDo you want to contd? (Y/N)";
cin>>ans;} while(toupper(ans)=='Y');
getch();
}

void sortrno(student s[10],int n)
{ student x;
 for(int i=0;i<=n-2;i++)
 for(int j=0;j<=n-2-i;j++)
 if(s[j].getrno() > s[j+1].getrno())
 { x=s[j];
 s[j]=s[j+1];
 s[j+1]=x; }
 cout<<"\nSorted roll no of the students:";
 for(i=0;i<=n-1;i++)
 s[i].showdata();
 }

 void sortmarks(student s[10],int n)
{ student x;

 for(int i=0;i<=n-2;i++)
 for(int j=0;j<=n-2-i;j++)
 if(s[j].getmarks() > s[j+1].getmarks())
 { x=s[j];
 s[j]=s[j+1];
 s[j+1]=x; }
 cout<<"\n\nSorted marks of The Students:";
 for(i=0;i<=n-1;i++)
 s[i].showdata();
 }

