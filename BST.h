#pragma once
#include "BSTNode.h"
#include <iostream>
#include <string>
#include <fstream>
#include <new>  
using namespace std;

class BST {
public:
	BST();
	~BST();
	void insert(char c, string str);
	string search(char c);
	void erase();
	void print(BSTNode* pRoot);
private:
	BSTNode* mpHead;
};