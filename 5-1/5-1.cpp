// 5-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//Sum of all integers between entered integers

int main()
{
   int first, second, sum=0;

   cout << "Enter an int and presse enter then another"<<endl; 
   cin >> first; cin >> second;
   cout<<endl << "the integers entered are: " << first << " and " << second<<endl;
   for (; first <= second; first++)
      sum += first;
   cout << "the sum of the integers is " << sum << endl;
   return 0;
}

