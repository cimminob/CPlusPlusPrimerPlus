// 4-9.cpp : Defines the entry point for the console application.
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

   CandyBar *snack = new CandyBar[3]{{ "mocha munch", 2.3, 350 },{ "Coco Crunch", 2.8, 375 },{ "peanut crisp", 3.2, 425 } };
   for (int i = 0; i < 3; i++) {
      cout << snack[i].brand << " " << snack[i].weight << " " << snack[i].calories << endl;

   }
   cin.get();
   cin.get();
   return 0;
}

