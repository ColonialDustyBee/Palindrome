#ifndef PALINDROME_H
#define PALINDROME_H
#include <string>

using namespace std;
// Palindrome - w = w^R
// Read each individual string and compare the two
class Palindrome
{
private:
	int stringIndex = 0; // meant to track track of individual string.
	bool gotLength = false;
	bool isAPalindrome = false;
	int sizeOfWord = 0;
	string reversed = "", oldWord = "";
	int returnLength(string);
public:
	Palindrome();
	void isPalindrome(string);
};
#endif