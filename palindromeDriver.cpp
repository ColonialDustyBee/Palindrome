#include <iostream>
#include <string>
#include "Palindrome.h"
using namespace std;


int main() {
	Palindrome PL;
	string palindrome;
	cout << "Please enter string to see if it is a palindrome or not: ";
	getline(cin, palindrome); 
	PL.isPalindrome(palindrome);
	return 0;
}