#include<fstream>
#include <iostream>
#include"bintree.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	BinTree tree;

	tree.insert(&tree.getRoot(), "Яблоко");
	tree.insert(&tree.getRoot(), "Апельсин");
	tree.insert(&tree.getRoot(), "Гавс");
	tree.insert(&tree.getRoot(), "Мандарин");
	tree.insert(&tree.getRoot(), "Кто?");
	tree.insert(&tree.getRoot(), "Абрикос");
	tree.insert(&tree.getRoot(), "Мирэа");
	tree.insert(&tree.getRoot(), "ОООООООООООО");

	cout << tree.contains(&tree.getRoot(), "Кто?") << endl; // содержит ли слово

	cout << tree.maxLenWord(&tree.getRoot()) << endl; // самое длинное слово

	tree.printWords(&tree.getRoot()); // в алфавитном порядке

	tree.print(&tree.getRoot(), 10); // печать дерева

	return 0;
}