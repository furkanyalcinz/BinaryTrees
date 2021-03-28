//Furkan YALÇIN 20181701039
#include "btree.h"
#include <iostream>
#include <string>

int main()
{
	int value;
	btree *MyBtree = new btree();

	MyBtree->insert(10);
	MyBtree->insert(6);
	MyBtree->insert(7);
	MyBtree->insert(9);
	MyBtree->insert(45);
	MyBtree->insert(13);
	MyBtree->insert(12);
	MyBtree->insert(8);
	MyBtree->insert(22);
	MyBtree->insert(21);
	MyBtree->insert(28);

	cout<<"These are values of the tree;\n 10, 6, 7, 9, 45, 13, 12, 8, 22, 21, 28.";
	int i = 0;
	while (i<3)
	{
		cout << "Enter a number" << endl;
		cin >> value;
		if (MyBtree->search(value) != NULL)

			cout << to_string(value) + " is found in the tree!" << endl;
		else
			cout << "The tree does not contain such an item" << endl;
		i++;
	}
	


	
}


