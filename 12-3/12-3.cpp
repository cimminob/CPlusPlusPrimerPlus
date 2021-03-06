// 12-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stock20.h"
using std::cin;
using std::cout;
using std::endl;

const int STKS = 4;

int main()
{
   Stock stock1("123456", 20, 12.50);
   //stock1.show();
   cout << stock1;
   stock1.buy(15, 18.25);
   //stock1.show();
   cout << stock1;
   stock1.sell(400, 20.00);
   //stock1.show();
   cout << stock1;
   cout << endl << endl << endl;

     // create an array of initialized objects
      Stock stocks[STKS] = {
         Stock("NanoSmart", 12, 20.0),
         Stock("Boffo Objects", 200, 2.0),
         Stock("Monolithic Obelisks", 130, 3.25),
         Stock("Fleep Enterprises", 60, 6.5)
         };

      std::cout << "Stock holdings:\n";
      int st;
      for (st = 0; st < STKS; st++)
         cout<<stocks[st];
       // set pointer to first element
      const Stock * top = &stocks[0];
      for (st = 1; st < STKS; st++)
         top = &top->topval(stocks[st]);
      // now top points to the most valuable holding
      std::cout << "\nMost valuable holding:\n";
      //top->show(); 
      cout << *top;
      std::cin.get();
      return 0;



}

