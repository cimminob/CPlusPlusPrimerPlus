// 5-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
   int num;
   cout << "Enter number of rows: ";
   cin >> num;
   int count;
   count = num-1;
   //two dimensional array
   char** Array=new char*[num];
   //initialize array
   for (int i = 0; i < num; i++) {
      Array[i] = new char[num] {};
   }
   for (int i = 0; i < num; i++) {
      for (int j = 0; j < num; j++) {
         if (j >= count) 
            Array[i][j] = '*';
         else
            Array[i][j] = '.';
      }
      --count;
   }
   cout << endl;
   for (int i = 0; i < num; i++) {
      for (int j = 0; j < num; j++)
         cout << Array[i][j];
      cout << endl;
   }
   cin.get();
   cin.get();
    return 0;
}

