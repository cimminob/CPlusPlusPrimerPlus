// 6-6.cpp : Defines the entry point for the console application.
//
//program to keep track of monetary contributions

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct member {
   string name;
   long double amt;

};

int main()
{
   int num = 0;
   int count = 0;
   cout << "enter number of contributors:  ";
   cin >> num;
   cin.ignore();
   member* Members = new member[num];

   for (int i = 0; i < num; i++) {
      cout << endl << "enter name ";
       getline(cin, Members[i].name);
      cout << endl << " enter contribution amount ";
      cin >> Members[i].amt;
      cin.ignore();
   }
   cout << endl << endl << "Grand Patrons who donated > 10,000";
   for (int j = 0; j < num; j++) {
      if (Members[j].amt >= 10000) 
      {
         cout << endl << Members[j].name << "   " << Members[j].amt;
      
      }
   }

   cin.get();
   cin.get();
    return 0;
}

