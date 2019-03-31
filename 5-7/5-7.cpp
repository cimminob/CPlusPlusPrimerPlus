// 5-7.cpp : Defines the entry point for the console application.
//
//program to make a catalogue of cars
#include "stdafx.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::get;

struct car {
   string make;
   int year;

};

int main()
{
   int numOfCars;
   cout << "how many cars do you want to catalogue? ";
   cin >> numOfCars;

      cout << endl;
   car* CarArray = new car[numOfCars];
   for (int i = 0; i < numOfCars; i++) {
      //discard new line in  buffer
      cin.ignore();
      cout << "enter make ";
      getline(cin,CarArray[i].make);
      cout << endl << "enter year ";
      cin >> CarArray[i].year;
      cout << endl;
   }

   cout << "Here is your collection: " << endl;
   for (int i = 0; i < numOfCars; i++)
      cout << CarArray[i].make << "  " << CarArray->year << endl;

   delete[] CarArray;
    return 0;
}

