#include "BSTNode.h"

BSTNode::BSTNode() {
	this->c = '\0';
	this->str = '\0';
	this->mpLeft = nullptr;
	this->mpRight = nullptr;
}

BSTNode::BSTNode(char newc, string newstr) {
	this->c = newc;
	this->str = newstr;
	this->mpLeft = nullptr;
	this->mpRight = nullptr;
}

char BSTNode::getChar() {
	return this->c;
}

string BSTNode::getStr() {
	return this->str;
}

BSTNode* BSTNode::getLeft() {
	return this->mpLeft;
}

BSTNode* BSTNode::getRight() {
	return this->mpRight;
}

void BSTNode::setChar(char newc) {
	this->c = newc;
}

void BSTNode::setStr(string newstr) {
	this->str = newstr;
}

void BSTNode::setLeft(BSTNode *pLeft) {
	this->mpLeft = pLeft;
}

void BSTNode::setRight(BSTNode* pRight) {
	this->mpRight = pRight;
}


