/* Based on the above class student,write a function search which receives
  a rno,searches for that student record and display the details if found.
   Receive the array of object and its size as parameters. */

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
    { cout<<"\nEnter the roll number:";
    cin>>rno;
    cout<<"\nEnter name:";
    gets(name);
    cout<<"\nEnter the marks:";
    cin>>marks; }
    void showdata()
   { cout<<"\nNAME:"<<name<<"\nROLL NUMBER:"<<rno<<"\nMARKS:"<<marks; }
    int getrno()
    { return rno; }
    };

    void search(student s[],int);

   void main()
   { student s[10];int n;
    char ans;
   do{ clrscr();
    cout<<"\nHOw many students?";
   cin>>n;
   for(int i=0;i<=n-1;i++)
   s[i].getdata();
   search(s,n);
    cout<<"\nDo you want to continue?(Y/N)";
    cin>>ans;} while(toupper(ans)=='Y');
    getch();}

    void search(student s[10],int n)
    { int i,num;
     cout<<"\nEnter the roll number:";
    cin>>num;
    i=0;
    while(s[i].getrno()!=num && i<=n-1)
    i++;
    if(s[i].getrno()==num)
    s[i].showdata();
    else
    cout<<"\nNot Found.";  }


