// 6-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
   char ch=NULL;
   cout << "please enter one of the following choices: " << endl;
   cout << "a) bluegill          b)pumpkinseed" << endl;
   cout << "c) Redear Sunfish    c)Warmouth" << endl;
   cout << "or q to quit" << endl;
   cin >> ch;
   cout << endl;
   while(ch!='Q'&& ch!='q') {
      switch (ch) {
         case 'a':
         case 'A': cout << "up to 2.6lbs"<<endl;
            break;
         case 'b':
         case 'B': cout << "<1 lbs"<<endl;
            break;
         case 'c':
         case 'C': cout << "1 lbs"<<endl;
            break;
         case 'd':
         case 'D': cout << "up to 2.25lbs"<<endl;
            break;
         default: cout << "invalid choice" << endl;
      }
      cin >>ch;
   }
   cin.ignore();
   cin.get();
   cin.get();
    return 0;
}

