// 6-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
  long int tvarp = 0;
  long int tax = 0;
   
   cout << "enter tvarp income:   ";
   while (cin >> tvarp && tvarp > 0) {
      if (tvarp <= 5000)
         tax = 0;
      else if (tvarp >= 5000 && tvarp < 15000)
         tax = (tvarp - 5000)*.1;
      else if (tvarp >= 15000 && tvarp < 35000)
         tax = 10000 * .1 + (tvarp - 15000)*.15;
      else if (tvarp >= 3500)
         tax = 10000 * .1 + 20000 * .15 + (tvarp - 35000)*.2;
      cout << endl << "tax owed is " << tax << endl;
      cout << "enter another income ";
   }
   cin.get();
   cin.get();
    return 0;
}

