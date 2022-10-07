#include "Palindrome.h"
#include <iostream>
using namespace std;
Palindrome::Palindrome() { };

int Palindrome::returnLength(string word) { // Private member function
	gotLength = true;
	return word.length(); // Should return length
}
void Palindrome::isPalindrome(string word) {
	if (!gotLength) { // This should only be called once.
		sizeOfWord = returnLength(word); // Should call private member function
		reversed = string(word.rbegin(), word.rend()); // meant to save the reversed word since w = w^R
	}
	// Base Case
	if (sizeOfWord == 0) {
		if (isAPalindrome == false) {
			cout << word << " is not a palindrome!" << endl;
		}
		else {
			cout << word << " is a palindrome!" << endl;
		}
	}
	// General Case - meant to evaluate the string.
	if (word[stringIndex] == reversed[stringIndex]) { // Going from end to beginning, if it is equal to each other, it should make bool value true.
		isAPalindrome = true; // ends when sizeOfWord is 0
	}
	else {
		isAPalindrome = false; // ends when sizeOfWord is 0
	}
	// Recursive Case  
	if (sizeOfWord > 0) {
		stringIndex++; // increases index.
		sizeOfWord--; 
		isPalindrome(word); // calls function again
	}
	
}
