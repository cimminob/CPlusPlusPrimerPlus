// 8-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void Display(string &, int &);

int main()
{
   int count = 0;
   string theString;
   cout << "enter a string: ";
   cin >> theString;
   Display(theString, count);
   Display(theString, count);
   Display(theString, count);
   cin.get();
   cin.get();
   return 0;
}

void Display(string & a, int & count)
{
   ++count; //increment number of times function called
   cout << endl << "......................";
   if (count > 0)
      for (int i = 0; i < count; i++)
         cout << endl << a;
   else 
      cout << endl << a;
   cout << endl << "......................";
   return;
}
