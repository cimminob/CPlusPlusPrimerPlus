// 5-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
   //2 dimensional array of monthly sales;
   string months[12] = { "january", "february", "march", "april", "may", "june", "july",
   "august", "september", "october", "november", "december" };
   int yearSum = 0; 
   int totalSum = 0;

   //initialize to zero with empty brackets
   int* sales = new int[3, 12]{ {} };
   for (int j = 1; j <=3; j++) {
      for (int i = 0; i < 12; i++) {
         cout << "enter year " << j << " sales for " << months[i]<<endl;
         cin >> sales[j, i];
         yearSum += sales[j, i];
      }
      cout <<"year " << j << " sum =" << yearSum<<endl;
      //add yearSum to totalSum
      totalSum += yearSum;
      //reset yearSum
      yearSum = 0;
   }

   cout << "total sum is " << totalSum;

    return 0;
}

