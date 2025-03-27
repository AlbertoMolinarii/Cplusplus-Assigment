#include "binary_tree.h"
#include "listTest.h"
using namespace std;

int main(int argc, char** argv)
{
	BinaryTree<Item> BT1;

	BT1.AddItem(Item("Giorgio"));
	BT1.AddItem(Item("Johnny"));
	BT1.AddItem(Item("Francesco"));
	BT1.AddItem(Item("Alberto"));
	BT1.AddItem(Item("Davide"));
	BT1.AddItem(Item("Paolo"));
	BT1.AddItem(Item("Filippo"));

	BT1.traverse();

	return 0;
}