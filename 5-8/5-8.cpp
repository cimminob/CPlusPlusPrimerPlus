// 5-8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   int wordCount = 0;
    char Array[20];
    while (strcmp(Array, "done")!=0) {
       cout << "enter a word " << endl;
       cin >> Array;
       ++wordCount;
    }
    
    cout << endl << "the number of words entered is " << wordCount;
    
    return 0;
}

