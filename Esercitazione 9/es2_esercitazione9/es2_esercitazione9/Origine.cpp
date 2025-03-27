#include "bst.h"
#include "symbol_table_item.h"
#include<fstream>
#include<sstream>
using namespace std;

bool numero(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	BST<Item, Key> bst1;
	BST<Item, Key> bst2;

	string nome, telefono, ufficio;
	ifstream myfile("telefoni.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, ufficio, ','))
		{
			getline(myfile, nome, ',');
			getline(myfile, telefono);

			Item it1(nome, ufficio);
			Item it2(telefono, nome);

			bst1.insert(it1);
			bst2.insert(it2);
		}
	}
	myfile.close();

	bst1.balance();
	bst2.balance();
	
	//cout << "Rappresentazione Albero 1:" << endl;
	//bst1.show(cout);
	//cout << "\n" << "Rappresentazione Albero 2:" << endl;
	//bst2.show(cout);

	for (int i = 0; i < bst2.tree_sizee(); i++)
	{
		Item it1 = bst1.select(i);
		
		for (int i = 0; i < bst1.tree_sizee(); i++)
		{
			Item it2 = bst2.select(i);

			if (it1.key() == it2.getinfo())
			{
				cout << it1.getinfo() << " " << it1.key() << " " << it2.key() << endl;
			}
		}
	}

	string stringa;
	cout << "Inserisci una stringa:" << endl;
	getline(cin, stringa);

	if (numero(stringa))
	{
		for (int i = 0; i < bst2.tree_sizee(); i++)
		{
			Item it2 = bst2.select(i);

			if (stringa == it2.key())
			{
				for (int j = 0; j < bst1.tree_sizee(); j++)
				{
					Item it1 = bst1.select(j);

					if (it1.key() == it2.getinfo())
					{
						cout << it1.getinfo() << " " << it2.getinfo() << " " << it2.key() << endl;
					}
				}
			}
			
		}
	}
	else if (!numero(stringa))
	{
		for (int i = 0; i < bst1.tree_sizee(); i++)
		{
			Item it1 = bst1.select(i);

			if (stringa == it1.key())
			{
				for (int j = 0; j < bst1.tree_sizee(); j++)
				{
					Item it2 = bst1.select(j);

					if (it1.getinfo() == it2.getinfo())
					{
						cout << it2.getinfo() << " " << it2.key() << endl;
					}
				}
			}
		}
	}

	return 0;
}