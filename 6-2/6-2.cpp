// 6-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   double donations[4]{};
   double average=0;
   double sum = 0;

   cout << "enter 4 donation values " << endl;
   int i = 0;
   while (i <= 3 && cin >> donations[i] ) {
      sum += donations[i];
      ++i;
   }

   average = sum/i;
   cout << endl << "average is " << average << endl;
   cin.get();
   cin.get();

   return 0;
}

