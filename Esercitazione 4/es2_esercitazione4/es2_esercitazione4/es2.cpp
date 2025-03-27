#include "list.h"
#include "listTest.h"
#include "LList.h"
using namespace std;

int find(LList<Item>& L, string abbr, string nome)
{
	for (L.moveToStart(); L.currPos() < L.length(); L.next())
	{
		Item it = L.getValue();
		if ((it.getAbbreviazione() == abbr) && (it.getNomeCitta() != nome))
		{
			return L.currPos();
		}
		else if ((it.getAbbreviazione() == abbr) && (it.getNomeCitta() == nome))
		{
			return 0;
		}
	}
	return -1;
}

int ricerca(LList<Item>& L, string abbr, string nome)
{
	for (L.moveToStart(); L.currPos() < L.length(); L.next())
	{
		Item it = L.getValue();
		int t = find(L, abbr, nome);
		if (t == -1)
		{
			L.insert(Item(abbr, nome));
			return 1;
		}
		else if (t == 0)
		{
			return 0;
		}
		else
		{
			L.moveToPos(t);
			Item s = L.remove();
			s.setNome(nome);
			L.insert(s);
			return 2;
		}
	}
}

int main(int argc, char** argv)
{
	LList<Item> L1;

	L1.insert(Item("TO", "Torino"));
	L1.insert(Item("PR", "Parma"));
	L1.insert(Item("MI", "Milano"));
	L1.insert(Item("PA", "Palermo"));
	L1.insert(Item("BO", "Bologna"));

	cout << ricerca(L1, "TO", "Torino");
	cout << ricerca(L1, "PR", "Porco");
	cout << ricerca(L1, "GE", "Genova");

	lprint(L1);

	return 0;
}