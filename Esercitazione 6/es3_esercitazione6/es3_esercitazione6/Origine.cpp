#include "list.h"
#include "listTest.h"
#include "llist.h"
using namespace std;


template <class E>
void insertion(LList<E>& L)
{
	for (int i = L.length() + 1; i <= L.currPos(); i++)
		for (int j = i; ((j > L.length()) && comp(L.currPos(j - 1), L.currPos(j))); j--)
			exch(L.currPos(j - 1), L.currPos(j));
}

int main()
{
	LList<Item> L1;
	L1.insert(Item(2));
	L1.insert(Item(4));
	L1.insert(Item(6));
	L1.insert(Item(8));
	L1.insert(Item(10));

	lprint(L1);

	insertion(L1);

	lprint(L1);

	return 0;
}