#include "binary_tree.h"
#include "listTest.h"
using namespace std;

int main(int argc, char** argv)
{
	BinaryTree<Item>* BT1 = new BinaryTree<Item>;
	BinaryTree<Item>* BT2 = new BinaryTree<Item>;

	BT1->AddItem(Item(1));
	BT1->AddItem(Item(2));
	BT1->AddItem(Item(3));
	BT1->AddItem(Item(4));
	BT1->AddItem(Item(5));

	BT2->AddItem(Item(1));
	BT2->AddItem(Item(2));
	BT2->AddItem(Item(3));
	BT2->AddItem(Item(4));
	BT2->AddItem(Item(5));

	int gg = BT1->equal_tree_structure(BT2->root);
	if (gg == 1)
	{
		cout << "Belaaaa";
	}
	else if (gg == 0)
	{
		cout << "NOOOOO";
	}

	return 0;
}