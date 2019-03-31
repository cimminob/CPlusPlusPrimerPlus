// 6-9.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


struct member {
   string name;
   long double amt;

};

int main()
{
   int num = 0;
   int count = 0;
   ifstream inFile;
   inFile.open("C:\\Users\\Brian\\Documents\\Coding\\contributions.txt");
   if (!inFile.is_open()) {
      cout << endl << "failed to open file, press a key to exit";
      cin.get();
      exit(EXIT_FAILURE);
   }
   inFile>>num;
   inFile.ignore();
   member* Members = new member[num];
   for (int i = 0; i < num; i++) {
      getline(inFile, Members[i].name);
      inFile >> Members[i].amt;
      inFile.ignore();
   }
   cout << endl << endl << "Grand Patrons who donated > 10,000";
   for (int j = 0; j < num; j++) {
      if (Members[j].amt >= 10000)
      {
         cout << endl << Members[j].name << "   " << Members[j].amt;
      }
   }
   inFile.close();
   cin.get();
   cin.get();
   return 0;
}

