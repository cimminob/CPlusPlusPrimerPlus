// 6-7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <string>
using namespace std;



int main()
{
   int wordCount=0;
   int consCount=0;
   int vowelCount=0;
   int nonAlpha=0;
   string  word;
   //first letter
   char first;
   cin >> word;
   while (word!="q") {
      ++wordCount;
      if (isalpha(word[0]))
         switch (word[0]) {
         case 'a':++vowelCount; break;
         case 'e':++vowelCount; break;
         case 'i':++vowelCount; break;
         case 'o':++vowelCount; break;
         case 'u': ++vowelCount; break;
         default: ++consCount; break;
         }
      else
         ++nonAlpha;
      cin>>word;
   }
   cin.ignore();
   cout << "Word count: " << wordCount<<endl;
   cout << "consonant count: " << consCount << endl;
   cout << "vowel count: " << vowelCount << endl;
   cout << "non alpha count " << nonAlpha << endl;
   cin.ignore();
   cin.get();
   cin.get();
    return 0;
}

