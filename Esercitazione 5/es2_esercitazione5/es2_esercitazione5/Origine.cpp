#include "Lstack.h"
#include "stack.h"
#include "LstackTest.h"
using namespace std;

const int N = 10;

void fibonacci()
{
	LStack<Item> s;
	s.push(Item(1));
	int somma = 0;
	for (int i = 0; i < N; i++)
	{
		Item it = s.topValue();
		somma += it.key();
		s.push(Item(somma));
	}
	Lstackprint<Item>(s);
}

int main()
{
	fibonacci();

	return 0;
}