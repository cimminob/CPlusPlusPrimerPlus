//8-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS
using namespace std;

template<typename T>
T maxn(T anArray[], int num);

//specialization
template<> char* maxn(char* anArray[], int num);

int main()
{
   double doubleArray[6] = { 9,8,2,7,12,11 };
   int fourArray[4] = { 3,8,2,7 };
   const char* charsArray[5] = { "hello", "boo", "fart", "mars", "cat" };
   cout << "calling with doubleArray" << maxn(doubleArray, 6) << endl;
   cout << "calling with fourArray" << maxn(fourArray, 4) << endl;
   cout << "calling with charsArray" << maxn(doubleArray, 6) << endl;
   cin.get();
   cin.get();
   return 0;
}

template<typename T>
T maxn(T anArray[], int num)
{
   T largest = anArray[0];

   for (int i=1;i<num;i++) {
      if (largest < anArray[i])
         largest = anArray[i];
   }      
   return largest;
}

template<>
char * maxn(char * anArray[], int num)
{
   char * longest = nullptr;
   for (int i = 0; i < num; i++) {
      if (strlen(anArray[i]) > strlen(longest))
         strcpy(longest, anArray[i]);
   }
   return longest;
}