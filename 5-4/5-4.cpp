// 5-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{  
   double Daphne = 100;
   //simple interest 10%
   double intD = 0;
   //compound interest 5% 
   double Cleo = 100;
   double intC = 0;
   int years = 1;
   do {
      //10% simple interest of original $100 investment
      Daphne = Daphne + (100*.1);
      // 5% compound interest
      Cleo = Cleo + (Cleo * .05);
      ++years;
   } while (Daphne < Cleo);
   std::cout << "number of years is " << years << std::endl;

    return 0;
}

