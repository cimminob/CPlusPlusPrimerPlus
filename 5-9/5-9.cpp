// 5-9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int wordCount = 0;
   string word;
   while (word!= "done"){
      cout << "enter a word " << endl;
      cin >> word;
      ++wordCount;
   }

   cout << endl << "the number of words entered is " << --wordCount<<endl;
   return 0;
}