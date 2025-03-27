#include "C:\Users\albim\OneDrive\Desktop\C++\alist.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\link.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\list.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\listTest.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\llist.h"
#include<iostream>
using namespace std;

int main()
{
	AList<Item> array[3];
	
	array[0].insert(Item(2));
	array[0].insert(Item(4));
	array[0].insert(Item(10));

	array[1].insert(Item(1));
	array[1].insert(Item(5));
	array[1].insert(Item(11));

	array[2].insert(Item(6));
	array[2].insert(Item(20));
	array[2].insert(Item(7));

	for (int i = 0; i < 3; i++)
	{
		for (array[i].moveToStart(); array[i].currPos() < array[i].length(); array[i].next())
		{
			cout << array[i].getValue().key();
		}
	}

	return 0;
}