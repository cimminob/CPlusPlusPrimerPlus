// 6-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>

using namespace std;
int main()
{
   char ch=NULL;



   while (ch!='@') {
      cout << "enter char ";
      cin.get(ch);
      if (islower(ch))
         cout << " " << char(toupper(ch)) << " ";
      else if (isupper(ch))
         cout <<" "<< char(tolower(ch)) << " ";
    }

   cin.get();
   cin.get();
    return 0;
}

