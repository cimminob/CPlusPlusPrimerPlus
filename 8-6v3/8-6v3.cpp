//8-6v3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
T maxn(T anArray[], int num);

//specialization
template<> string maxn(string anArray[], int num);

int main()
{
   double doubleArray[6] = { 9,8,2,7,12,11 };
   int fourArray[4] = { 3,8,2,7 };
   string strArray[5] = { "hello", "boo", "fart", "mars", "cat" };
   cout << "calling with doubleArray" << maxn(doubleArray, 6) << endl;
   cout << "calling with fourArray" << maxn(fourArray, 4) << endl;
   string address = maxn(strArray, 5);
   cout << endl << address;
   // cout << "calling with strArray" << maxn(charsArray, 5) << endl;
   cin.get();
   cin.get();
   return 0;
}

template<typename T>
T maxn(T anArray[], int num)
{
   T largest = anArray[0];

   for (int i = 1; i<num; i++) {
      if (largest < anArray[i])
         largest = anArray[i];
   }
   return largest;
}
template<> string maxn(string anArray[], int num)
{
   string longest = {};
   for (int i = 0; i < num; i++) {
      if (anArray[i].length() > longest.length())
         longest=anArray[i];
   }
   return longest;
}