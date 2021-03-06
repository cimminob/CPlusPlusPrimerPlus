// 8-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar {
   char brand[20];
   double weight;
   int calories;
};

void setCandy(CandyBar & Bar, char*aBrand, double aWeight, int theCals);
void display(CandyBar & Bar);

int main()
{
   CandyBar aBar;
   char name[20] = { "Millenium Munch" };
   double wt = 2.85;
   int cal = 350;
   setCandy(aBar, name, wt, cal);
   display(aBar);
   cin.get();
   cin.get();
   return 0;
}



void setCandy(CandyBar & Bar, char*aBrand, double aWeight, int theCals)
{
   strcpy_s(Bar.brand, aBrand);
   Bar.weight = aWeight;
   Bar.calories = theCals;
}

void display(CandyBar & Bar) 
{
   cout << endl << "brand name is " << Bar.brand;
   cout << endl << "weight is" << Bar.weight;
   cout << endl << "calories are" << Bar.calories;
}