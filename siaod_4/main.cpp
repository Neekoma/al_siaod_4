#include<fstream>
#include <iostream>
#include"bintree.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	BinTree tree;

	tree.insert(&tree.getRoot(), "������");
	tree.insert(&tree.getRoot(), "��������");
	tree.insert(&tree.getRoot(), "����");
	tree.insert(&tree.getRoot(), "��������");
	tree.insert(&tree.getRoot(), "���?");
	tree.insert(&tree.getRoot(), "�������");
	tree.insert(&tree.getRoot(), "�����");
	tree.insert(&tree.getRoot(), "������������");

	cout << tree.contains(&tree.getRoot(), "���?") << endl; // �������� �� �����

	cout << tree.maxLenWord(&tree.getRoot()) << endl; // ����� ������� �����

	tree.printWords(&tree.getRoot()); // � ���������� �������

	tree.print(&tree.getRoot(), 10); // ������ ������

	return 0;
}