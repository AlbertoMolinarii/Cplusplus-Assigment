#include "Lstack.h"
#include "LStackTest.h"
#include "stack.h"
using namespace std;

template <typename E> void Reverse(LStack<E>& S)
{
	LStack<E> stack;
	LstackTransfer<E>(S, stack);
	S.clear();
	while (stack.length())
	{
		Item it = stack.pop();
		S.push(it);
	}
}

int main()
{
	LStack<Item> S1;
	S1.push(Item(10));
	S1.push(Item(5));
	S1.push(Item(1));
	S1.push(Item(11));

	Reverse<Item>(S1);
	Lstackprint<Item>(S1);

	return 0;
}