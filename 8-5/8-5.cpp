// 8-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 

template <typename T>
T maxn(T anArray[]);

int main()
{
   int someArray[5] = { 1,2,1,3,1 };
   double doubleArray[5] = { 12312, 33323, 123123, 99933, 77777 };
   auto var = maxn(someArray);
  cout << endl <<var ;
  cout << endl << endl << "...........";
  auto var2 = maxn(doubleArray);
  cout << endl << var2;

  
   cin.get();
   cin.get();

   return 0;
}

template <typename T>
T maxn(T anArray[])
{
   T large;
   large = anArray[0];
   for (int i = 1; i < 5; i++) {
      if (anArray[i] > large)
         large = anArray[i];
   }
   return large;
}