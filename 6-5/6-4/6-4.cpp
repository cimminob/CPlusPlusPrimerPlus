// 6-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
const int strsize = 30;
using namespace std;

int main()
{
   struct bop {
      char fullname[strsize];
      char title[strsize];
      char bopname[strsize];
      int preference; //0=fullname, 1 = title, 2 - bopname

   };
   bop anArray[3]{ { "karen", "director", "boom boom", 2 },
   {"peter", "associate", "dr doom", 0},{"Bobby","partner", "batman", 1} };
   char choice=NULL;
   cout << "a) display by name     b) display by title"<<endl;
   cout << "c) dispay by bopname   d) display by preference" << endl;
   cout << "q) quit" << endl<<endl;
   cin >> choice;

   while (choice != 'q' && choice != 'Q') {
      switch (choice) {
      case 'a':
      case 'A': 
         for (int l = 0; l < 3; l++) { cout << anArray[l].fullname << endl; };
         break;
      case 'b':
      case 'B':
         for (int l = 0; l < 3; l++) { cout << anArray[l].title << endl; };
         break;
      case 'c':
      case 'C':
         for (int l = 0; l < 3; l++) { cout << anArray[l].bopname << endl; };
         break;
      case 'd':
      case 'D':
         for (int l = 0; l < 3; l++) { cout << anArray[l].preference<<endl; };
         break;
      default: cout << "invalid choice"<<endl;
      }
      cin >> choice;
      cout << endl;
   }
   cin.get();
   cin.get();

    return 0;
}

