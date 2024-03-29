///////////////////////////////////////////////////////////////////////////////////////
//Setenay Guner
//BST to convert English characters to Morse code strings. 
//Morse code is a famous coding scheme that assigns a series of dots and dashes to each letter of the alphabet,
//each digit, and a few special characters. In sound-oriented systems, 
//the dot represents a short sound and the dash represents a long sound. 
//Other representations of dots and dashes are used with light-oriented systems 
//and signal-flag systems (from Deitel and Deitel C How to Program).
/////////////////////////////////////////////////////////////////////////////////

#include "BST.h"

int main() {
	BST bst;
	ifstream file;
	file.open("text.txt"); //convert.txt 
	char c;
	string str;
	cout << "\nText has been translated to:" << endl;
	while (file.get(c)) {
		if (c == ' ') {
			cout << "   ";
		}
		else if (c == '\n') {
			cout << '\n';
		}
		else {
			str = bst.search(c);
			cout << str << " ";
		}
	}
	file.close();
	cout << "\n Press enter to exit." << endl;
	getchar();
	return 0;
}
