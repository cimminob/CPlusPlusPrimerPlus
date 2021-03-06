// 16-2.cpp : Defines the entry point for the console application.


/*
1. A palindrome is a string that is the same backward as it is forward.For example, “tot”
and “otto” are rather short palindromes.Write a program that lets a user enter a
string and that passes to a bool function a reference to the string.The function
should return true if the string is a palindrome and false otherwise.At this point,
don’t worry about complications such as capitalization, spaces, and punctuation.
That is, this simple version should reject “Otto” and “Madam, I’m Adam.” Feel free
to scan the list of string methods in Appendix F for methods to simplify the task.

2. Do the same problem as given in Programming Exercise 1 but do worry about
complications such as capitalization, spaces, and punctuation.That is, “Madam, I’m
Adam” should test as a palindrome.For example, the testing function could reduce
the string to “madamimadam” and then test whether the reverse is the same.Don’t
forget the useful cctype library.You might find an STL function or two useful
although not necessary.
*/
#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <string>

//returns true if a word is a palindrome
bool palindrome(std::string & aWord);

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;
   using std::string;
   using std::getline;
   string word;
   bool result;

   while (true) {
      cout << "enter a lowercase word for palindrome test or Q to quit: " << endl;
      cin >> word;

      if (word[0] == 'Q')
         exit(EXIT_SUCCESS);
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
            word[i]=tolower(word[i]);
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
