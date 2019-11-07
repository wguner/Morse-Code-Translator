#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <new>  
using namespace std;

class BSTNode {
public:
	BSTNode();
	BSTNode(char newc, string newstr);
	char getChar();
	string getStr();
	BSTNode*getLeft();
	BSTNode*getRight();
	void setChar(char newc);
	void setStr(string newstr);
	void setLeft(BSTNode *pLeft);
	void setRight(BSTNode *pRight);
private:
	char c;
	string str;
	BSTNode* mpLeft;
	BSTNode* mpRight;
};