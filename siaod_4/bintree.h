#pragma once
#include<iostream>
#include<string>

#define COUNT 10

using namespace std;

struct Node {
	Node* left;
	Node* right;
	Node* parent;
	string data;

	Node() {
		left = nullptr;
		right = nullptr;
		parent = nullptr;
		data = "";
	}

	Node(Node* parent) {
		this->parent = parent;
		left = nullptr;
		right = nullptr;
		data = "";
	}
};

class BinTree {
private:
	Node* root;

public:
	BinTree() {
		root = new Node();
	}

	void insert(Node* node, string s);
	void print(Node* node, int level = 0);
	void printWords(Node* node);
	string maxLenWord(Node* node);
	bool contains(Node* node, string s);

	inline Node& getRoot() { return *root; }
};


