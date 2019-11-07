#include "BST.h"

BST::BST() {
	this->mpHead = nullptr;
	ifstream morse;
	char c;
	string str;
	morse.open("Morse.txt"); //arranged file according to http://www.learnmorsecode.com/
	for (int i = 1; i < 40; i++) {
		morse >> c;
		morse >> str;
		insert(c, str);
	}
	cout << "Displaying tree: " << endl;
	print(mpHead);
	morse.close();
}

BST::~BST() {
	//cout << "\nBST destructor." << endl;
	erase();
}

void BST::insert(char c, string str) {
	BSTNode* temp = new BSTNode, *head = this->mpHead;//weird 
	bool success = false;
	temp->setChar(c);
	temp->setStr(str);
	if (this->mpHead == nullptr) {
		this->mpHead = temp;
	}
	else {
		while (!success) {
			if (temp->getChar() < head->getChar()) { //pretraverse
				if (head->getLeft() == nullptr) {
					head->setLeft(temp);
					success = true;
				}
				else {
					head = head->getLeft();
				}
			}
			else { //posttraverse
				if (head->getRight() == nullptr) {
					head->setRight(temp);
					success = true;
				}
				else {
					head = head->getRight();
				}
			}
		}
	}
}

string BST::search(char c) {
	BSTNode* head = this->mpHead;
	bool success = false;
	if (islower(c)) { //if lower
		c = toupper(c);
	}

	while (!success) {
		if (head->getChar() == c) {
			success = true;
			return head->getStr();
		}
		else if (c < head->getChar()) {
			head = head->getLeft();
		}
		else {
			head = head->getRight();
		}
	}
}

void BST::erase() {
	BSTNode* head = mpHead;
	while ((head->getLeft() != nullptr) || (head->getRight() != nullptr)) {
		if (head->getLeft() != nullptr) {
			head = head->getLeft();
		}
		else if (head->getRight() != nullptr) {
			head = head->getRight();
		}
		else {
			delete head;
			head = mpHead;
		}
	}
	delete head;
}

void BST::print(BSTNode* pRoot) {
	if (pRoot != nullptr) {
		print(pRoot->getLeft());
		cout << pRoot->getChar();
		print(pRoot->getRight());
	}
}