// 10-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bank.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
   Bank Bank1;
   float amt;
   string name;

   cout << "displaying empty account";
   cout << endl << Bank1.getName();
   cout << endl << Bank1.getAcct();
   cout << endl << Bank1.getBalance();


   Bank1.newAccount();
   cout << endl;
   cout << "enter new amount to deposit: " << endl;
   cin >> amt;
   Bank1.deposit(amt);
   cout << endl << "your new balance is: " << Bank1.getBalance();
   cout << endl << "how much cash would you like";
   cin >> amt;
   Bank1.withdrawal(amt);
   cout << endl << "your new balance is: " << Bank1.getBalance();
   cout << endl << "..........................";
   cout << "enter new name";
   cin >> name;
   Bank1.setName(name);
   cout << endl << "your account has been updated. ";
   cout << endl << Bank1.getName() << endl << Bank1.getAcct() << endl << Bank1.getBalance();

   cin.get();
   cin.get();
    return 0;
}

