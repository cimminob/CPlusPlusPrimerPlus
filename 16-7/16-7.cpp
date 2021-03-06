// 16-7.cpp : Defines the entry point for the console application.
/*
7. A common game is the lottery card.The card has numbered spots of which a certain
number are selected at random.Write a Lotto() function that takes two arguments.
The first should be the number of spots on a lottery card, and the second
should be the number of spots selected at random.The function should return a
vector<int> object that contains, in sorted order, the numbers selected at random.
For example, you could use the function as follows:
vector<int> winners;
winners = Lotto(51,6);

This would assign to winners a vector that contains six numbers selected randomly
from the range 1 through 51. Note that simply using rand() doesn’t quite do the
job because it may produce duplicate values. Suggestion: Have the function create a
vector that contains all the possible values, use random_shuffle(), and then use the
beginning of the shuffled vector to obtain the values.Also write a short program
that lets you test the function. 
*/

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::cin;
using std::endl;


typedef std::vector<int> Vint;

//spots on card, balls that pop up with the chosen lotto numbers
Vint winners(int spots_on_card, int balls );

int main()
{
   int spots=0;
   int LottoBalls=0;
   Vint winningBalls;
   Vint::iterator Viterator;
   cout << "enter number of spots on card: ";
   cin >> spots;
   cout << "enter number of balls to choose: ";
   cin >> LottoBalls;
   
   winningBalls =winners(spots, LottoBalls);
   for (auto i : winningBalls)
      cout << i << " ";
   cin.get();
   cin.get();
   return 0;
}

Vint winners(int spots_on_card, int balls)
{
   Vint spacesVector;
   for (int i = 1; i < spots_on_card; i++)
      spacesVector.push_back(i);
   std::random_shuffle(spacesVector.begin(), spacesVector.end());
   Vint newVector(spacesVector.begin(), spacesVector.begin() + (balls));
   return newVector;
}
