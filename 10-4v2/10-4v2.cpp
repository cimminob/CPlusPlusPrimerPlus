// 10-4v2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SALES.h"
#include <iostream>
using SALES::Sales;


using std::cin;
using std::cout;
using std::endl;

int main()
{
   double HyundaiSales[4] = { 56799,48509 ,11000};
   Sales Hyundai(HyundaiSales, 4);
   Hyundai.showSales();
   cout << endl;
 
   double ToyotaSales[4] = { 56799,48509 ,11000,98421 };
   Sales toyota(ToyotaSales, 4);
   toyota.showSales();
   cout << endl;
   Sales Honda;
   Honda.showSales();
   cin.get();
   cin.get();
   return 0;
}

