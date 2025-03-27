#include<iostream>
#include<string>
#include "list.h"
#include "listTest.h"
#include "llist.h"

using namespace std;

void insert_ordered(List<Item>& L, const Item& it)
{
	if (L.length() == 0)
	{
		L.insert(it);
		return;
	}
	for (L.moveToStart(); L.currPos() < L.length(); L.next()) {
		if (it.key() >= L.getValue().key())
		{
			L.insert(it);
			return;
		}
	}
	L.append(it);
}

void fondiliste(LList<Item>& L1, LList<Item>& L2, LList<Item>& L3)
{
	for (L1.moveToStart(); L1.currPos() < L1.length(); L1.next())
	{
		Item it = L1.getValue();
		insert_ordered(L3, it);
	}
	for (L2.moveToStart(); L2.currPos() < L2.length(); L2.next())
	{
		Item it = L2.getValue();
		insert_ordered(L3, it);
	}
}

int main()
{
	LList<Item> L1, L2, L3;

	L1.insert(Item(1));
	L1.insert(Item(3));
	L1.insert(Item(5));

	L2.insert(Item(2));
	L2.insert(Item(4));
	L2.insert(Item(6));

	fondiliste(L1, L2, L3);
	lprint(L3);

	return 0;
}