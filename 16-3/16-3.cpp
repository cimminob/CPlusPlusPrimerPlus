// 16-3.cpp : Defines the entry point for the console application.
/*
3. Redo Listing 16.3 so that it gets it words from a file. One approach is to use a
vector<string> object instead of an array of string.Then you can use
push_back() to copy how ever many words are in your data file into the
vector<string> object and use the size() member to determine the length of
the word list. Because the program should read one word at a time from the file,
you should use the >> operator rather than getline().The file itself should contain
words separated by spaces, tabs, or new lines.
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

//returns true if a word is a palindrome
bool palindrome(std::string & aWord);


int main()
{
   using std::ifstream; 
   using std::cin;
   using std::cout;
   using std::endl;
   using std::string;
   using std::getline;
   string word;
   bool result;

   ifstream infile;
   infile.open("test.txt");
   //if (infile.fail())
     // cout << "file did not open";
   if(!infile.is_open())
      cout << "file did not open";
   while (!infile.eof()) {
      
      infile >> word;

    //  if (word[0] == 'Q')
    //     exit(EXIT_SUCCESS);
      int i = 0;

      //correct any errors in the word
      while (word[i]) {
         //make sure the character is alphabetical
         if (!isalpha(word[i])) {
            word.erase(word.begin() + i);
            //loop back to test the new character in this place
            continue;
         }
         //make sure the character is all lower case
         if (isupper(word[i]))
            word[i] = tolower(word[i]);
         i++;
      }

      //check for blank word, then call palindrome
      if (word[0] != NULL) {
         result = palindrome(word);
         if (result)
            cout << word << " is a palindrome" << endl;
         else
            cout << word << " is NOT a palindrome" << endl;
      }
   }
   infile.close();
   cin.get();
   return 0;
}

bool palindrome(std::string & aWord) {
   int j = aWord.length() - 1;
   int i = 0;
   //iterate through loop starting at first element aWord[0] and incrementing
   //until i is halfway through the word
   for (i = 0; i < aWord.length() / 2; i++) {
      if (aWord[i] == aWord[j]) {
         --j;
         continue;
      }
      else
         break;
   }
   //1 is added to index i of aWord after all letters are equal making i equal to the length
   if (i == aWord.length() / 2)
      return true;
   else
      return false;
}
