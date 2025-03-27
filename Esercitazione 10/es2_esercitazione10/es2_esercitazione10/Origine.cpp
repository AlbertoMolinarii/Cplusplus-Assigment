#include<list>
#include "list.h"
#include "listTest.h"
#include "llist.h"
using namespace std;

void ListPrint(list<Item>& L)
{
	for (list<Item>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << " " << *it;
	}
}

int main()
{
	LList<list<Item>> lista_di_liste;
	list<Item> L1;
	list<Item> L2;
	list<Item> L3;
	list<Item> L4;

	L1.push_back(2);
	L1.push_back(4);
	L1.push_back(6);

	L2.push_back(1);
	L2.push_back(3);
	L2.push_back(5);

	L3.push_back(100);
	L3.push_back(200);
	L3.push_back(300);

	L4.push_back(20);
	L4.push_back(40);
	L4.push_back(60);

	lista_di_liste.insert(L1);
	lista_di_liste.insert(L2);
	lista_di_liste.insert(L3);
	lista_di_liste.insert(L4);

	int max = 0;
	for (lista_di_liste.moveToStart(); lista_di_liste.currPos() < lista_di_liste.length(); lista_di_liste.next())
	{
		list<Item> L = lista_di_liste.getValue();

		for (list<Item>::iterator it = L.begin(); it != L.end(); it++)
		{
			if (it->key() > max)
			{
				max = it->key();
			}
		}
	}
	cout << max;

	return 0;
}