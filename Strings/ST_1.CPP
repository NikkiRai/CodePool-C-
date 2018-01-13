/*To check for Palindrome String, compare the string length and
cancatenate any two strings.Receive the two strings as parameters.  */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int pal(char s[]);
int compare(char s[],char s1[]);
void concatenate(char s[],char s1[]);

void main()
{ char s[10],ans,ch;int c=0;
do{ clrscr();
 cout<<"\nEnter your string:";
 gets(s);

 cout<<"\nMENU:";
 cout<<"\nA.Palindrome String.";
 cout<<"\nB.Compare The String Length.";
 cout<<"\nC.Concatenation Of two Strings.";
 cout<<"\nEnter choice:(a-c): ";
 cin>>ch;
 clrscr();
 switch(ch)
 { case 'a':
   case 'A':{ c=pal(s);
	    if(c==1)
	    cout<<"\n\nPALINDROME STRING>!";
	    else
	    cout<<"\n\nNOT A PALINDROME>!";
	     break; }
   case 'b':
   case 'B':{ char s1[20];
	      cout<<"\nEnter the second string: ";
	      gets(s1);
	      c=compare(s,s1);
	    if(c==1)
	    cout<<"\n\nSTRINGS HAVE EQUAL LENGTH.>!";
	    else
	    cout<<"\n\nNOT EQUAL>!";
	    break;                }
   case 'c':
   case 'C':{ char s1[20];
	      cout<<"\nEnter the second string: ";
	      gets(s1);
	      concatenate(s,s1);
	    cout<<"\n\nStrings Concatenated.";
	    break;  }
   default:cout<<"\nWrong input.!";
   }

cout<<"\nDo you want to continue? (Y/N)";
cin>>ans;} while(toupper(ans)=='Y');
getch(); }

int pal(char s[20])
{ char s1[20];
strcpy(s1,s);
int c=0;
 if(strcmpi(strrev(s1),s)==0)
  c=1;
  return c;
  }

int compare(char s[20],char s1[10])
{ int c=0;
if(strlen(s)==strlen(s1))
c=1;
return c; }

void concatenate(char s[20],char s1[10])
{ char s2[40];
strcpy(s2,(strcat(strcat(s," "),s1)));
puts(s2); }