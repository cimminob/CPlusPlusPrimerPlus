// 14-4.cpp : Defines the entry point for the console application.
//

/*
A Person class holds the first name and the last name of a person. In addition to its
constructors, it has a Show() method that displays both names.A Gunslinger class
derives virtually from the Person class. It has a Draw() member that returns a type
double value representing a gunslinger’s draw time.The class also has an int member
representing the number of notches on a gunslinger’s gun. Finally, it has a
Show() function that displays all this information.

A PokerPlayer class derives virtually from the Person class. It has a Draw() member
that returns a random number in the range 1 through 52, representing a card
value. (Optionally, you could define a Card class with suit and face value members
and use a Card return value for Draw().) The PokerPlayer class uses the Person
show() function.The BadDude class derives publicly from the Gunslinger and
PokerPlayer classes. It has a Gdraw() member that returns a bad dude’s draw time
and a Cdraw() member that returns the next card drawn. It has an appropriate
Show() function. Define all these classes and methods, along with any other necessary
methods (such as methods for setting object values) and test them in a simple
program similar to that in Listing 14.12.

*/

#include "stdafx.h"
#include "Person.h"
#include <iostream>
#define MAX 4
using std::cout;
using std::cin;
using std::endl;

int main()
{
   char choice;
   Person* array[MAX];
   int count;
   for (count = 0; count < 4; count++) {
      cout << "choose a character: g for gunslinger, p for poker player, b for bad dude, q to quit"<<endl;
      cin >> choice;
      //strchr returns a pointer to the first character, returns null if not found
      while (strchr("gpbq", choice) == NULL)
         cout << "please only enter a g, p, b, or q"<<endl;
      if (choice == 'q')
         break;
      switch (choice) {
         case 'g': array[count] = new Gunslinger;
            break;

         case 'p': array[count] = new PokerPlayer;
            break;
         case 'b': array[count] = new BadDude;
            break;
      }
      array[count]->set();
   }
   int i;
   
   for (i = 0; i < count; i++) {
      array[i]->show();
      delete array[i];
   }

   cin.get();
   cin.get();
   return 0;
}

