// 5-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int sum=0;
   int input = 0;
   cout << "please enter several integers" << endl;

   do {
      input = cin.get();
      if (isdigit(input))
         sum += input - 48;
   } while (input != 48);
   cout << endl << "sum is " << sum;
    return 0;
}

