// 6-8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
_CSTDLIB_

using namespace std;
int main()
{

   ifstream myFile;
   myFile.open("C:\\Users\\Brian\\Documents\\sunfish.txt");
   if (!myFile.is_open()) {//failed to open file 
      cout << "could not open file, program terminating";
      exit(EXIT_FAILURE);
   }
   char ch;
   int count = 0;
   while (myFile.get(ch)) {
      ++count;
   }
   cout << endl << "number of characters in file is " << count << endl;
   cin.get();
   cin.get();
   myFile.close();
    return 0;
}

