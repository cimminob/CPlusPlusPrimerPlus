// 4-7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    //pizza analysis
   struct pizzaCo {
      string name;
      double diameter;
      double weight;
    };
   
   pizzaCo Company;
   cout << "enter name ", getline(cin, Company.name);
   cout << endl << "enter diamter ", cin >> Company.diameter;
   cout << endl << "enter weight ", cin >> Company.weight;
   cout << endl << Company.name << " " << Company.diameter << " " << Company.weight;
   cin.get();
   cin.get();



    return 0;
}

