// 4-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
    string first, last;
    cout << "enter first name ", cin >> first;
    cout << endl << "enter last name ", cin >> last;
    last = last + ", " + first;
    cout<<endl <<"here's the info in a single string "<<last;
    cin.get();
    cin.get();
    return 0;
}

