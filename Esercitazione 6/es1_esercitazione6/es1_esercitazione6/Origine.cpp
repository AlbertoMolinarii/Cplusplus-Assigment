#include "list.h"
#include "listTest.h"
#include "llist.h"
using namespace std;

const int MINVAL = 1;
const int MAXVAL = 50;
const int N = 7;

void selectionsort(List<Item>& L) {
	int min_pos;
	Item min_element;
	// se lunghezza <2 non fai nulla
	for (int i = 0; i < L.length() - 1; i++) {
		L.moveToPos(i);
		min_element = L.getValue();
		min_pos = i;
		for (int j = i + 1; j < L.length(); j++) {
			L.moveToPos(j);
			Item it_temp = L.getValue();
			if (it_temp.key() < min_element.key())
			{
				min_pos = L.currPos();
				min_element = it_temp;
			}
		}
		L.moveToPos(min_pos);
		Item it_temp = L.remove();
		L.moveToPos(i);
		L.insert(it_temp);
	}

}

int main()
{
	LList<Item> L1;
	LList<Item> L2;

	for (int i = 0; i < N; i++)
	{
		L1.insert(Item(MINVAL + rand() & (MAXVAL - MINVAL + 1)));
	}
	for (int i = 0; i < N; i++)
	{
		L2.insert(Item(MINVAL + rand() & (MAXVAL - MINVAL + 1)));
	}
	cout << "L1: "; lprint(L1);
	cout << "L2: "; lprint(L2);
	
	for (L2.currPos(); L2.currPos() < L2.length(); L2.next())
	{
		L1.insert(Item(L2.getValue().key()));
	}
	cout << "Ltot: "; lprint(L1);

	selectionsort(L1);

	cout << "L1 ordinata: "; lprint(L1);

	return 0;
}