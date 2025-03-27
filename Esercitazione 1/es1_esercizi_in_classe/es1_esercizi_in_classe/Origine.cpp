#include "C:\Users\albim\OneDrive\Desktop\C++\link.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\list.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\listTest.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\llist.h"
#include "C:\Users\albim\OneDrive\Desktop\C++\alist.h"
using namespace std;

void mergelist(LList<Item>& lista1, LList<Item>& lista2, LList<Item>& lista3)
{
	for (int i = 0; i < lista1.length(); i++)
	{
		lista3.append(Item(lista1.getValue().key()));
	}
	//for (int i = 0; i < lista2.length(); i++)
	//{
	//	lista3.append(i);
	//}
	//cout << "L3:";lprint(lista3);
}

int main()
{
	LList<Item> L1;
	LList<Item> L2;
	LList<Item> L3;

	L1.insert(Item(10));
	L1.insert(Item(5));
	L1.insert(Item(2));

	L2.insert(Item(20));
	L2.insert(Item(11));
	L2.insert(Item(6));
	L2.insert(Item(1));

	mergelist(L1, L2, L3);

	return 0;
}