#include "Lqueue.h"
#include "LqueueTest.h"
#include "queue.h"
using namespace std;

template <typename E>
int equalqueues(LQueue<E>& Q1, LQueue<E>& Q2)
{
	if (Q1.length() != Q2.length())
		return 0;
	while (Q1.length() > 0)
	{
		Item q1 = Q1.dequeue();
		Item q2 = Q2.dequeue();
		if (q1.key() != q2.key())
			return 0;
	}
	return 1;
}

int main()
{
	LQueue<Item> Q1;
	LQueue<Item> Q2;

	Q1.enqueue(Item(1));
	Q1.enqueue(Item(2));
	Q1.enqueue(Item(3));

	Q2.enqueue(Item(1));
	Q2.enqueue(Item(2));
	Q2.enqueue(Item(3));

	cout<<equalqueues(Q1, Q2);

	return 0;
}

