#include"bintree.h"


void BinTree::insert(Node* node, string s)
{	
	if (node == nullptr) {
		node = new Node();
		node->data = s;
		return;
	}

	if (node->data != "") {
		if (s[0] > node->data[0]) {
			
			if (node->right) {
				insert(node->right, s);
			}

			else {
				node->right = new Node();
				node->right->parent = node;
				node->right->data = s;
			}
		}
		else {
			if (node->left) {
				insert(node->left, s);
			}
			else {
				node->left = new Node();
				node->left->parent = node;
				node->left->data = s;
			}
		}
	}
	else {
		node->data = s;
	}
}

void BinTree::print(Node* node, int level)
{
	if (node == nullptr)
		return;

	level += COUNT;
	print(node->right, level);

	cout << endl;
	for (int i = COUNT; i < level; i++)
		cout << ' ';
	cout << node->data << endl;

	print(node->left, level);
}

void BinTree::printWords(Node* node)
{
	if (node == nullptr)
		return;
	printWords(node->left);
	cout << node->data << " ";
	printWords(node->right);
}

string BinTree::maxLenWord(Node* node)
{
	if (node == nullptr)
		return "";
	
	string res = node->data;
	string lMax = maxLenWord(node->left);
	string rMax = maxLenWord(node->right);
	if (lMax.size() > res.size())
		res = lMax;
	if (rMax.size() > res.size())
		res = rMax;

	return res;
}

bool BinTree::contains(Node* node, string s)
{
	if (node == nullptr)
		return false;

	bool lRes = contains(node->left, s);
	bool rRes = contains(node->right, s);

	if (lRes == true || rRes == true)
		return true;

	if (node->data == s)
		return true;
	else
		return false;
}
