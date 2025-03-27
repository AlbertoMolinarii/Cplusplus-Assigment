#include "list.h"
#include "listTest.h"
#include "llist.h"
using namespace std;

void modifica(LList<Item>& L)
{
	for (L.moveToPos(1); L.currPos() < L.length(); L.next())
	{
		Item it = L.getValue();
		int t = L.currPos();
		cout << it.key();
		for (L.moveToPos(t+1); L.currPos() < (t + 2); L.next())
		{
			//cout << it.key();
		}
	}
}

int main(int argc, char** argv)
{
	LList<Item> L;

	L.insert(Item(9));
	L.insert(Item(3));
	L.insert(Item(2));
	L.insert(Item(6));
	L.insert(Item(4));
	
	lprint(L);
	modifica(L);
	lprint(L);

	return 0;
}