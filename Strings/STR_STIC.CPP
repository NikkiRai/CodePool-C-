/* Define a class supply with the following description:
1.Private members: code,food name,sticker,food type. A member function
 gettype as per the given sticker:
 GREEN: Vegetarian
 YELLOW: Contains Eggs
 RED: Non-Vegetarian
2.Public members: Func foodin to receive values for code,food name,sticker
and call func gettype to assign foodtype.A func foodout to allow user to
view the contents of data members. */

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

class supply
{ int code;
char name[20],sticker[20],foodtype[20];

void gettype()
{ if(strcmpi(sticker,"green")==0)
 strcpy(foodtype,"VEGETARIAN");
 else if (strcmpi(sticker,"yellow")==0)
 strcpy(foodtype,"CONTAINS EGG");
 else if(strcmpi(sticker,"red")==0)
 strcpy(foodtype,"NON-VEGETARIAN");
 else
 strcpy(foodtype,"Not Available.As no such sticker available.");
 }

public:

supply() //constructor
{ code=0;
 strcpy(name," ");
 strcpy(sticker," ");
 strcpy(foodtype," ");
 }

void foodin()
{ cout<<"\nEnter the food code? ";
cin>>code;
cout<<"\nEnter the food name? ";
gets(name);
cout<<"\nEnter the sticker (GREEN/YELLOW/RED): ";
gets(sticker) ;
gettype(); }

void foodout()
{ cout<<"\nName of food item : "<<name;
   cout<<"\nCode: "<<code;
   cout<<"\nSticker: "<<sticker;
   cout<<"\nFoodtype: "<<foodtype;
   }
	     };

void main()
{ supply s; char ans;
do { clrscr();
s.foodin();
s.foodout();
cout<<"\nDo you want to continue? (Y/N) ";
cin>>ans; } while(toupper(ans)=='Y');
getch(); }


