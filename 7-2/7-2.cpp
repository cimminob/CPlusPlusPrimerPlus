// 7-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//get golf scores, 0 to exit
int input(double score[])
{

   cout << "enter golf scores, 0 to end" << std::endl;
   int i = 0;
   while (i <= 9) {
      cout << endl << "enter score ";
      cin >> score[i];
      //test of early termination
      if (score[i] == 0) {
         if (i == 0)
            exit(EXIT_SUCCESS);
         else {
            //don't count 0 as a score
            --i;
            break;
         }
      }      
      ++i;
   } 

   return --i;
}

//print out the scores on one line
void display(double score[], int numScores)
{
   cout << endl << "your scores are: "<<endl;
   int i = 0;
   while (i <= numScores) {
      cout << score[i] << " ";
      ++i;
   }
   return;
}

//get average
void average(double score[], int numScores) {
   //check for divide / 0
   if (numScores == 0)
      return;
   double sum=0;
   for (int i = 0; i <= numScores; ++i)
      sum += score[i];
   cout << endl << "avg is " << sum / (numScores + 1) << endl;
   return;
}

int main()
{
    int numScores=0;
    double * score = new double[10];
    numScores=input(score);
    display(score, numScores);
    average(score, numScores);
    cin.get();
    cin.get();
    return 0;
}

