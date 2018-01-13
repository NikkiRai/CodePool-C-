// To find total and avg.

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

class array
{ int a[10];
int n;

public:

void input()
{ cout<<"\nHow many numbers?";
cin>>n;
cout<<"\nEnter any "<<n<<" numbers:";
for(int i=0;i<=n-1;i++)
cin>>a[i]; }

void print()
{ int i;
cout<<"\nArray entered was: ";
for(i=0;i<=n-1;i++)
cout<<a[i]<<' '; }

void totavg()
{ float t=0;int i; float avg;
for(i=0;i<=n-1;i++)
t+=a[i];
avg=t/n;
cout<<"\nTOTAL: "<<t<<"\nAVERAGE: "<<avg;
}
  };

void main()
{ array n;
char ans;
do { clrscr();
 n.input();
n.print();
n.totavg();
cout<<"\nDo you want to continue?(Y/N)";
cin>>ans; } while(toupper(ans)=='Y');
getch(); }
