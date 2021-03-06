// 5-2.cpp : Defines the entry point for the console application.
//
///////factorials//////////


#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

int main()
{
   array<long double, 16> factorials;
   factorials[1] = factorials[0] = 1;
   for (int i = 2; i < factorials.size(); i++)
      factorials[i] = i * factorials[i - 1];
   for (int i = 0; i < factorials.size(); i++)
      std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}

