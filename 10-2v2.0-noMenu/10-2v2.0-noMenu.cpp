// 10-2v2.0-noMenu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "golf.h"
#include <iostream>
using std::endl;
using std::cin;
using std::cout;


int main()
{
   int handicap;

   golf player1;
   cout << endl << "display: ";
   player1.display();
   cout << "enter new handicap";
   cin >> handicap;
   player1.setHandicap(handicap);
   cout << endl << "display: ";
   player1.display();

   cout << endl << "creating player2: " << endl;
   char aName[10] = "thomas";
   golf player2(aName, 12);
   cout << endl << "display: ";
   player2.display();
   cin.get();
   cin.get();
   
   return 0;
}

