// 4-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
   struct CandyBar {
      string brand;
      double weight;
      int calories;
   };

   CandyBar snack{ "mocha munch", 2.3, 350 };

   cout << "snack variable is " << snack.brand << " " << snack.weight << " " << snack.calories;
   cin.get();
    return 0;
}

