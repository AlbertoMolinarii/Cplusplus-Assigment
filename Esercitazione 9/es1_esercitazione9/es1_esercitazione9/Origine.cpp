#include "bst.h"
#include "symbol_table_item.h"
#include<fstream>
#include<sstream>
using namespace std;

void bubblesort(List<Item>& L) {
	for (int i = 0; i < (L.length() - 1); i++) {
		for (int j = (L.length() - 1); j > i; j--) {
			L.moveToPos(j);
			Item it_j = L.getValue();
			L.moveToPos(j - 1);
			Item it_jj = L.getValue();
			if (it_jj.key() > it_j.key())
			{
				L.moveToPos(j);
				Item removed = L.remove();
				L.moveToPos(j - 1);
				L.insert(removed);
			}
		}
	}
}

int main()
{
	int id;
	string st;
	BST<Item, Key> bst1;

	ifstream myfile("info.dat");
	if (myfile.is_open())
	{
		while (myfile >> id >> st)
		{
			Item it(id, st);
			bst1.insert(it);
		}
		myfile.close();
	}

	BST<Item, Key> bst2;
	int id2;
	string st2;

	do
	{
		cout << "Inserisci nuovi ID e stringa:" << endl;
		cin >> id2 >> st2;

		if (id2 >= 0)
		{
			Item it(id2, st2);
			bst2.insert(it);
		}
	} while (id2 >= 0);
	
	bst1.balance();
	bst2.balance();

	cout << "Albero di ricerca 1:" << endl;
	bst1.show(cout);
	cout << "Albero di ricerca 2:" << endl;
	bst2.show(cout);

	LList<Item> L;

	bst1.merge(bst2, L);
	bst2.merge(bst1, L);

	bubblesort(L);

	lprint(L);

	return 0;
}