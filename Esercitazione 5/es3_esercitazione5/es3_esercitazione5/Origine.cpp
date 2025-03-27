#include "Lstack.h"
#include "LstackTest.h"
#include "stack.h"
using namespace std;

const int N = 5;

int fattoriale(LStack<Item>& S)
{
	int fatt = 1;
	while (S.length() > 0)
	{
		Item it = S.pop();
		fatt *= it.key();
	}
	return fatt;
}

int main()
{
	LStack<Item> S1;
	for (int i = 1; i <= N; i++)
	{
		S1.push(Item(i));
	}
	Lstackprint<Item>(S1);
	cout << "\n" << fattoriale(S1);


	return 0;
}