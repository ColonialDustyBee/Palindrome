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
		sizeOfWord = returnLength(word); // Should call function
		reversed = string(word.rbegin(), word.rend()); // meant to save the reversed word since w = w^R
	}
	if (sizeOfWord == 0) {
		if (isAPalindrome == false) {
			cout << word << " is not a palindrome!" << endl;
		}
		else {
			cout << word << " is a palindrome!" << endl;
		}
	}
	// Base case
	if (word[stringIndex] == reversed[stringIndex]) { // Going from end to beginning, if it isn't 
		isAPalindrome = true; // ends when it is 0
	}
	else {
		isAPalindrome = false;
	}
	// Recursive Case  
	if (sizeOfWord > 0) {
		stringIndex++; // increases index.
		sizeOfWord--; // it should call here but it isn't??? what the fuck??
		isPalindrome(word); // calls function again
	}
	
}